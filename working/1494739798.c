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
    char var_0[2];                                                                      // Tag.BODY
    int *var_8 = malloc(sizeof(int));                                                   // Tag.BODY
    char *var_9;                                                                        // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    struct pthread_cond_t var_18;                                                       // Tag.BODY
    strncpy(var_0, var_9, sizeof(var_0));                                               // Tag.STRCPY_SAFE
    const int var_3 = 8;                                                                // Tag.BODY
    struct pthread_mutex_t var_15;                                                      // Tag.BODY
    pthread_mutex_unlock(&var_15);                                                      // Tag.BODY
    pthread_mutex_lock(&var_15);                                                        // Tag.BODY
    pthread_cond_signal(&var_18);                                                       // Tag.COND_SIGNAL_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER