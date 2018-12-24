
"""generate.py: generate SA-bAbI code examples"""

import argparse
import hashlib
import os
import random
import string
import sys
import json

import templates

from sa_tag import Tag

# maximum number of variable names
MAX_NUM_VARS = 20
# variable name template
VAR_STR = "var_%s"

MAX_NUM_DUMMIES = 2
MIN_NUM_DUMMIES = 1
MAX_NUM_EXAMPLES = 2
MIN_NUM_EXAMPLES = 1

MAX_INT = 10

# the number of bytes in each hash filename
FNAME_HASHLEN = 5

# command-line argument default values
DEFAULT_NUM_INSTANCES = 50
DEFAULT_SEED = 0


def main(args):
    """With fixed initial seed, generate instances and save as C files

    Args:
        args (argparse.Namespace), with attributes:
            num_instances (int): how many instances to generate
            outdir (str): path to directory to save instances; must exist
            seed (int): seed to use for random.seed(). If -1, then seed by
                default Python seeding

    Returns: 0 if no error
    """
    # check args
    outdir = args.outdir
    seed = int(args.seed)
    num_instances = int(args.num_instances)

    # check paths
    outdir = os.path.abspath(os.path.expanduser(outdir))
    if not os.path.isdir(outdir):
        raise OSError("outdir does not exist: '{}'".format(outdir))

    # set seed
    if seed != -1:
        random.seed(seed)

    # Generate metadata only if the metadata_file argument is present
    generate_metadata = args.metadata_file is not None
    # This dict is used to store instance metadata
    tag_metadata = {}
    inst_num = 0

    mutex_example_gens = [gen_race_cond_example, gen_cond_wait_example, gen_cond_signal_example, ]
    example_gens = [gen_mem_example, gen_strcpy_example]
    dummy_gens = [gen_mem_dummy, gen_control_flow_dummy, gen_ordinary_dummy]

    while inst_num < num_instances:
        # generate example
        instance_str, tags = _gen_examples(mutex_example_gens, example_gens, dummy_gens)

        # generate filename
        byte_obj = bytes(instance_str, 'utf-8')
        fname = hashlib.shake_128(byte_obj).hexdigest(FNAME_HASHLEN)
        fname = "{}.c".format(fname)
        if fname in tag_metadata:
            continue

        # insert record into metadata for this c file
        tag_metadata[fname] = [tag.value for tag in tags]
        inst_num += 1

        # write to file
        path = os.path.join(outdir, fname)
        with open(path, 'w') as f:
            f.write(instance_str)

    if generate_metadata:
        # construct the complete metadata
        metadata = {
            "working_dir": outdir,
            "num_instances": num_instances,
            "tags": tag_metadata
        }
        with open(args.metadata_file, 'w') as f:
            json.dump(metadata, f)

    return 0


def gen_mem_example(var_list):
    int_num = random.randint(0,MAX_INT)
    substitutions = {
        'ptr_var': var_list.pop(),
        'int_num': int_num
    }
    lines = []
    if random.random() < 0.5:
        lines = templates.MEMORY_MANAGEMENT_LINES[0]
    else:
        lines = templates.MEMORY_MANAGEMENT_LINES[1]

    lines = lines[:]
    tags = [Tag.BODY for _ in lines]

    if random.random() < 0.5:
        safe = True
    else:
        safe = False

    if safe:
        lines = lines[:-1] + templates.PTR_ACCESS_LINES + lines[-1:]
        tags = tags[:-1] + [Tag.MEMORY_MANAGEMENT_SAFE] + tags[-1:]
    else:
        lines.extend(templates.PTR_ACCESS_LINES)
        tags.append(Tag.MEMORY_MANAGEMENT_UNSAFE)

    # replace
    lines = [string.Template(itm).substitute(substitutions) for itm in lines]
    return [[line] for line in lines], [[tag] for tag in tags]


def gen_race_cond_example(var_list):
    int_num = random.randint(0, MAX_INT)
    init_num = random.randint(0, MAX_INT)
    substitutions = {
        'int_var': var_list.pop(),
        'mutex_var': var_list.pop(),
        'init_num': init_num,
        'int_num': int_num
    }

    race_lines = templates.RACE_COND_LINES
    race_lines = race_lines[:]
    race_lines.insert(1, random.sample(templates.VAR_OP_LINES, 1)[0])   # to do: can change the number of use lines
    random.shuffle(race_lines)

    tags = []
    if race_lines[0] == templates.RACE_COND_LINES[0] and\
            race_lines[2] == templates.RACE_COND_LINES[1]:
        tags = [Tag.BODY, Tag.RACE_COND_SAFE, Tag.BODY]
    else:
        for line in race_lines:
            if line == templates.RACE_COND_LINES[0] or line == templates.RACE_COND_LINES[1]:
                tags.append(Tag.BODY)
            else:
                tags.append(Tag.RACE_COND_UNSAFE)

    dec_lines = templates.RACE_COND_DEC_LINES
    dec_lines = dec_lines[:]
    random.shuffle(dec_lines)
    lines = dec_lines + race_lines
    tags = [Tag.BODY, Tag.BODY] + tags

    # replace
    lines = [string.Template(itm).substitute(substitutions) for itm in lines]
    return [[line] for line in lines], [[tag] for tag in tags]


def gen_cond_wait_example(var_list):
    int_num = random.randint(0, MAX_INT)
    init_num = random.randint(0, MAX_INT)
    substitutions = {
        'int_var': var_list.pop(),
        'ok_var': var_list.pop(),
        'mutex_var': var_list.pop(),
        'cond_var': var_list.pop(),
        'init_num': init_num,
        'int_num': int_num
    }

    wait_lines = templates.COND_WAIT_LINES
    wait_lines = wait_lines[:]
    wait_lines.insert(1, random.sample(templates.VAR_OP_LINES, 1)[0])  # to do: can change the number of use lines
    tags = [Tag.BODY for _ in range(3)]

    wait_lines = [[line] for line in wait_lines]
    tags = [[tag] for tag in tags]

    if random.random() > 0.5:
        wait_lines = wait_lines[:-1] + [templates.WAITING_LINES[0]] + wait_lines[-1:]
        tags = tags[:-1] + [[Tag.BODY, Tag.COND_WAIT_SAFE, Tag.BODY]] + tags[-1:]
    else:
        wait_lines = wait_lines[:-1] + [templates.WAITING_LINES[1]] + wait_lines[-1:]
        tags = tags[:-1] + [[Tag.BODY, Tag.COND_WAIT_UNSAFE, Tag.BODY]] + tags[-1:]

    dec_lines = templates.COND_WAIT_DEC_LINES
    dec_lines = dec_lines[:]
    random.shuffle(dec_lines)
    lines = [[line] for line in dec_lines] + wait_lines
    tags = [[Tag.BODY] for _ in range(4)] + tags

    # replace
    new_lines = []
    for line_block in lines:
        new_lines.append([string.Template(itm).substitute(substitutions) for itm in line_block])
    return new_lines, tags


def gen_cond_signal_example(var_list):
    substitutions = {
        'mutex_var': var_list.pop(),
        'cond_var': var_list.pop(),
    }

    signal_lines = templates.COND_SIGNAL_LINES
    signal_lines = signal_lines[:]
    tags = []

    random.shuffle(signal_lines)
    if signal_lines == templates.COND_SIGNAL_LINES:
        tags = [Tag.BODY, Tag.COND_SIGNAL_SAFE, Tag.BODY]
    else:
        for line in signal_lines:
            if line == templates.COND_SIGNAL_LINES[1]:
                tags.append(Tag.COND_SIGNAL_UNSAFE)
            else:
                tags.append(Tag.BODY)

    dec_lines = templates.COND_SIGNAL_DEC_LINES
    dec_lines = dec_lines[:]
    random.shuffle(dec_lines)
    lines = dec_lines + signal_lines
    tags = [Tag.BODY for _ in range(2)] + tags

    # replace
    lines = [string.Template(itm).substitute(substitutions) for itm in lines]
    return [[line] for line in lines], [[tag] for tag in tags]


def gen_strcpy_example(var_list):
    int_num = random.randint(0, MAX_INT)
    substitutions = {
        'str_var1': var_list.pop(),
        'str_var2': var_list.pop(),
        'int_num': int_num
    }

    dec_lines = templates.STRCPY_DEC_LINES
    dec_lines = dec_lines[:]
    random.shuffle(dec_lines)
    str_lines = dec_lines
    str_lines = str_lines[:]
    tags = [Tag.BODY for _ in range(2)]

    if random.random() > 0.5:
        str_lines = str_lines + [templates.STRCPY_LINES[0]]
        tags = tags + [Tag.STRCPY_UNSAFE]
    else:
        str_lines = str_lines + [templates.STRCPY_LINES[1]]
        tags = tags + [Tag.STRCPY_SAFE]

    # replace
    lines = [string.Template(itm).substitute(substitutions) for itm in str_lines]
    return [[line] for line in lines], [[tag] for tag in tags]


def gen_mem_dummy(var_list):
    substitutions = {
        'ptr_var': var_list.pop(),
    }
    lines = []
    if random.random() < 0.5:
        lines = templates.MEMORY_MANAGEMENT_LINES[0]
    else:
        lines = templates.MEMORY_MANAGEMENT_LINES[1]

    lines = lines[:]
    tags = [Tag.BODY for _ in lines]

    # replace
    lines = [string.Template(itm).substitute(substitutions) for itm in lines]

    return [[line] for line in lines], [[tag] for tag in tags]


def gen_control_flow_dummy(var_list):
    init_num, int_num = sorted(random.sample(range(0, MAX_INT), 2))
    op = random.sample(["<", ">", "==", "<=", ">="], 1)[0]
    substitutions = {
        'var': var_list.pop(),
        'init_num': init_num,
        'int_num': int_num,
        'op': op,
        '_var': var_list.pop(),
        '_num': random.randint(0, MAX_INT),
    }
    dec_lines = templates.CONTROL_FLOW_DEC_LINES[:]
    dec_lines = [string.Template(itm).substitute(substitutions) for itm in dec_lines]
    dec_tags = [Tag.BODY for _ in range(len(dec_lines))]

    lines = random.sample(templates.CONTROL_FLOW_LINES, 1)[0]
    tags = [Tag.BODY for _ in range(len(lines))]
    lines = [string.Template(itm).substitute(substitutions) for itm in lines]

    return [dec_lines]+[lines], [dec_tags]+[tags]


def gen_ordinary_dummy(var_list):
    init_num = random.randrange(0, MAX_INT)
    substitutions = {
        'var': var_list.pop(),
        'init_num': init_num,
    }
    lines = random.sample(templates.ORDINARY_LINES, 1)
    lines = [string.Template(itm).substitute(substitutions) for itm in lines]
    tags = [Tag.BODY]

    return [lines], [tags]


# def gen_race_cond_dummy(var_list):
#     int_num = random.randint(0, MAX_INT)
#     init_num = random.randint(0, MAX_INT)
#     substitutions = {
#         'int_var': var_list.pop(),
#         'mutex_var': var_list.pop(),
#         'init_num': init_num,
#         'int_num': int_num
#     }
#
#     lines = templates.RACE_COND_DEC_LINES + templates.RACE_COND_LINES
#     lines.insert(3, random.sample(templates.VAR_OP_LINES, 1)[0])  # to do: can change the number of use lines
#
#     tags = [Tag.BODY, Tag.BODY, Tag.BODY, Tag.RACE_COND_SAFE, Tag.BODY]
#
#     # replace
#     lines = [string.Template(itm).substitute(substitutions) for itm in lines]
#     return lines, tags


def _gen_examples(mutex_eaxmple_gens, example_gens, dummy_gens):
    anon_vars = _get_anon_vars()
    num_examples = random.randrange(MIN_NUM_EXAMPLES, MAX_NUM_EXAMPLES + 1)
    num_dummies = random.randrange(MIN_NUM_DUMMIES, MAX_NUM_DUMMIES + 1)
    lines_list = []
    tags_list = []
    mutex_chosen = False
    for _ in range(num_examples):
        gens = mutex_eaxmple_gens + example_gens
        if mutex_chosen:
            gens = example_gens
        gen = random.sample(gens, 1)[0]
        if gen in mutex_eaxmple_gens:
            mutex_chosen = True
        lines, tags = gen(anon_vars)
        lines_list.append(lines)
        tags_list.append(tags)
    for _ in range(num_dummies):
        gen = random.sample(dummy_gens, 1)[0]
        lines, tags = gen(anon_vars)
        lines_list.append(lines)
        tags_list.append(tags)
    return _assemble_examples(lines_list, tags_list)


def _assemble_examples(lines_list, tags_list):
    lines = []
    tags = []

    while len(lines_list) > 0:
        idx = random.randrange(0, len(lines_list))
        lines = lines + lines_list[idx].pop(0)
        tags = tags + tags_list[idx].pop(0)
        if len(lines_list[idx]) == 0:
            lines_list.remove(lines_list[idx])
            tags_list.remove(tags_list[idx])

    tags = _format_tags(tags)
    instance_str = _format_lines(lines, templates.FUNC_TMPL_STR, tags)
    return instance_str, tags


def _format_lines(lines, func_tmpl_str, tags, tags_as_comments=True):

    body = "\n".join("    " + line for line in lines)
    instance_str = string.Template(func_tmpl_str).substitute({'body': body})

    if tags_as_comments:
        lines = instance_str.split("\n")
        max_linelen = max(len(line) for line in lines)
        fmt_str = "{:<{width}} // {}"
        lines = [fmt_str.format(line, tag, width=max_linelen)
                 for (line, tag) in zip(lines, tags)]
        instance_str = "\n".join(lines)

    return instance_str


def _format_tags(body_tags):
    """Get full list of tags by adding wrappers

    Args:
        body_tags (list of Tag instances): for body lines only

    Returns:
        tags (list of Tag instances): for full function
    """
    tags = ([Tag.OTHER for _ in range(10)] +
            body_tags +
            # return 0;     }
            [Tag.BODY, Tag.OTHER])
    return tags


def _get_anon_vars():
    """Get list of unique, anonymized variable names in random order

    Returns:
        anon_vars (list of str)
    """
    anon_vars = [VAR_STR % itm for itm in range(MAX_NUM_VARS)]
    random.shuffle(anon_vars)
    return anon_vars


def _get_args():
    """Get command-line arguments"""
    separator = '\n' + "#" * 79 + '\n'
    parser = argparse.ArgumentParser(
        description=__doc__ + separator,
        formatter_class=argparse.RawDescriptionHelpFormatter)

    parser.add_argument('outdir',
        help=("(str) Path to directory to write instance.c files to. Must "
              "exist before running"),
        metavar="<path>")

    parser.add_argument('-num_instances',
        help=("(int) Number of instance.c files to create; default "
              "{}".format(DEFAULT_NUM_INSTANCES)),
        default=DEFAULT_NUM_INSTANCES,
        metavar="<int>")

    parser.add_argument('-seed',
        help=("(int) Seed for random number generator, to reproduce results; "
              "default {}. If -1 is passed, then use default Python "
              "seed".format(DEFAULT_SEED)),
        default=DEFAULT_SEED,
        metavar="<int>")

    parser.add_argument('-metadata_file',
        help=("(str) Path to a file which shall be used to store simple "
              "json metadata about the generated instances"),
        metavar="<path>")

    parser.add_argument('--taut_only',
        action='store_true',
        help=("If passed, then generate examples with only flow-insensitive "
              "buffer writes"))

    parser.add_argument('--linear_only',
        action='store_true',
        help="If passed, then generate only flow-insensitive linear examples")

    args = parser.parse_args()
    return args



if __name__ == '__main__':
    RET = main(_get_args())
    sys.exit(RET)
