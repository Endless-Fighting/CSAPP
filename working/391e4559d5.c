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
    int *var_80 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_80);                                                                       // Tag.BODY
    char var_54[83];                                                                    // Tag.BODY
    char *var_98;                                                                       // Tag.BODY
    strncpy(var_54, var_98, sizeof(var_54));                                            // Tag.STRCPY_SAFE
    struct pthread_cond_t var_50;                                                       // Tag.BODY
    struct pthread_mutex_t var_29;                                                      // Tag.BODY
    pthread_cond_signal(&var_50);                                                       // Tag.COND_SIGNAL_UNSAFE
    pthread_mutex_lock(&var_29);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_29);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER