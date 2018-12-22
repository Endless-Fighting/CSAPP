
"""sa_tag.py: defines the Tag class for SA-bAbI"""
import enum

class Tag(enum.Enum):
    """Tags for each line of each instance representing buffer write safety
    """
    # Function wrapping lines
    OTHER = 0
    # Lines inside body that aren't buffer writes
    BODY = 1
    # memory management error
    MEMORY_MANAGEMENT_UNSAFE = 2
    MEMORY_MANAGEMENT_SAFE = 3
    # race condition error code with wrong order
    RACE_COND_UNSAFE = 4
    RACE_COND_SAFE = 5
    # condition wait
    COND_WAIT_UNSAFE = 6
    COND_WAIT_SAFE = 7
    # condition signal scheduling error
    COND_SIGNAL_UNSAFE = 8
    COND_SIGNAL_SAFE = 9
    # strcpy
    STRCPY_UNSAFE = 10
    STRCPY_SAFE = 11