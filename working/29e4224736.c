#include <stdlib.h>                                                                     // Tag.OTHER
#include <string.h>                                                                     // Tag.OTHER
struct pthread_mutex_t{ int i; };                                                       // Tag.OTHER
struct pthread_cond_t{ int i; };                                                        // Tag.OTHER
int pthread_mutex_lock(struct pthread_mutex_t* mutex_t){ return 0; }                    // Tag.OTHER
int pthread_mutex_unlock(struct pthread_mutex_t* mutex_t){ return 0; }                  // Tag.OTHER
void pthread_cond_wait(struct pthread_cond_t* cond_t, struct pthread_mutex_t* mutex_t); // Tag.OTHER
void pthread_cond_signal(struct pthread_cond_t* cond_t);                                // Tag.OTHER
int main()                                                                              // Tag.OTHER
{                                                                                       // Tag.OTHER
    char var_13[6];                                                                     // Tag.BODY
    char *var_15;                                                                       // Tag.BODY
    int var_9;                                                                          // Tag.BODY
    int *var_3 = malloc(sizeof(int));                                                   // Tag.BODY
    for(int var_5 = 3; var_5 < 6; var_5++){                                             // Tag.BODY
       var_9 = 2;                                                                       // Tag.BODY
    }                                                                                   // Tag.BODY
    free(var_3);                                                                        // Tag.BODY
    strcpy(var_13, var_15);                                                             // Tag.STRCPY_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER