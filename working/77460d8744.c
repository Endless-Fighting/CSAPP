#include <stdlib.h>                                                      // Tag.OTHER
#include <string.h>                                                      // Tag.OTHER
struct pthread_mutex_t{ int i; };                                        // Tag.OTHER
struct pthread_cond_t{ int i; };                                         // Tag.OTHER
int pthread_mutex_lock(struct pthread_mutex_t*){}                        // Tag.OTHER
int pthread_mutex_unlock(struct pthread_mutex_t*){}                      // Tag.OTHER
void pthread_cond_wait(struct pthread_cond_t*, struct pthread_mutex_t*); // Tag.OTHER
void pthread_cond_signal(struct pthread_cond_t*);                        // Tag.OTHER
int main()                                                               // Tag.OTHER
{                                                                        // Tag.OTHER
    struct pthread_mutex_t var_47;                                       // Tag.BODY
    static int var_65 = 0;                                               // Tag.BODY
    int *var_14;                                                         // Tag.BODY
    char *var_59;                                                        // Tag.BODY
    struct pthread_cond_t var_19;                                        // Tag.BODY
    var_14 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_14);                                                        // Tag.BODY
    char var_33[90];                                                     // Tag.BODY
    strncpy(var_33, var_59, sizeof(var_33));                             // Tag.STRCPY_SAFE
    static int var_75 = 40;                                              // Tag.BODY
    pthread_mutex_lock(&var_47);                                         // Tag.BODY
    var_75--;                                                            // Tag.BODY
    if(!var_65){                                                         // Tag.BODY
       pthread_cond_wait(&var_19, &var_47);                              // Tag.COND_WAIT_UNSAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_47);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER