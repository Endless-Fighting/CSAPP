
"""templates.py: Templates for SA-bAbI code generation"""

# CONTROL FLOW --------------------
CONTROL_FLOW_DEC_LINES = [
    "int $_var;",
]
CONTROL_FLOW_LINES = [
    [
        "for(int $var = $init_num; $var < $int_num; $var++){",
        "   $_var = $_num;",
        "}"
    ],
    [
        "int $var = $init_num;",
        "while($var < $int_num){",
        "   $_var = $_num;",
        "   $var++;",
        "}"
    ],
    [
        "int $var = $init_num;",
        "if($var $op $int_num){",
        "   $_var = $_num;",
        "}"
    ]
]


# ORDINARY -------------------
ORDINARY_LINES = [
    'int $var = rand();',
    'const int $var = $init_num;',
]


# MEM --------------------------------
PTR_ACCESS_LINES = ["*$ptr_var = $int_num;"]

MEMORY_MANAGEMENT_LINES = [
    [
        "int *$ptr_var;",
        "$ptr_var = malloc(sizeof(int));",
        "free($ptr_var);",
    ],
    [
        "int *$ptr_var = malloc(sizeof(int));",
        "free($ptr_var);",
    ],
]


# RACE COND --------------------------------
RACE_COND_DEC_LINES = [
    "static int $int_var = $init_num;",
    "static pthread_mutex_t $mutex_var;",
]

RACE_COND_LINES = [
    "pthread_mutex_lock(&$mutex_var);",
    "pthread_mutex_unlock(&$mutex_var);"
]

VAR_OP_LINES = [
    "$int_var++;",
    "$int_var--;",
    "++$int_var;",
    "--$int_var;",
    "$int_var = $int_num;",
]


# COND WAIT -------------------------
COND_WAIT_DEC_LINES = [
    "static int $int_var = $init_num;",
    "static int $ok_var = 0;",
    "struct pthread_mutex_t $mutex_var;",
    "struct pthread_cond_t $cond_var;",
]

COND_WAIT_LINES = [
    "pthread_mutex_lock(&$mutex_var);",
    # VAR_OP_LINES
    # WAITING_LINES
    "pthread_mutex_unlock(&$mutex_var);",
]

WAITING_LINES = [
    [
        "while(!$ok_var){",
        "   pthread_cond_wait(&$cond_var, &$mutex_var);",
        "}",
    ],
    [
        "if(!$ok_var){",
        "   pthread_cond_wait(&$cond_var, &$mutex_var);",
        "}",
    ]
]


# COND SIGNAL ------------------------
COND_SIGNAL_DEC_LINES = [
    "struct pthread_mutex_t $mutex_var;",
    "struct pthread_cond_t $cond_var;",
]

COND_SIGNAL_LINES = [
    "pthread_mutex_lock(&$mutex_var);",
    "pthread_cond_signal(&$cond_var);",
    "pthread_mutex_unlock(&$mutex_var);",
]


# STRCPY ----------------------
STRCPY_DEC_LINES = [
    "char *$str_var1;",
    "char $str_var2[$int_num];",
]

STRCPY_LINES = [
    "strcpy($str_var2, $str_var1);",  # unsafe
    "strncpy($str_var2, $str_var1, sizeof($str_var2));",  # safe
]

# main function body wrapper
FUNC_TMPL_STR = """#include <stdlib.h>
#include <string.h>
struct pthread_mutex_t{ int i; };
struct pthread_cond_t{ int i; };
int pthread_mutex_lock(struct pthread_mutex_t* mutex_t){ return 0; }
int pthread_mutex_unlock(struct pthread_mutex_t* mutex_t){ return 0; }
void pthread_cond_wait(struct pthread_cond_t* cond_t, struct pthread_mutex_t* mutex_t);
void pthread_cond_signal(struct pthread_cond_t* cond_t);
int main()
{
$body
    return 0;
}"""
