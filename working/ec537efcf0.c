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
    static pthread_mutex_t var_12;                                                      // Tag.BODY
    int *var_9 = malloc(sizeof(int));                                                   // Tag.BODY
    static int var_3 = 8;                                                               // Tag.BODY
    --var_3;                                                                            // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_12);                                                        // Tag.BODY
    char *var_17;                                                                       // Tag.BODY
    char var_16[6];                                                                     // Tag.BODY
    strncpy(var_16, var_17, sizeof(var_16));                                            // Tag.STRCPY_SAFE
    pthread_mutex_unlock(&var_12);                                                      // Tag.BODY
    free(var_9);                                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER