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
    int *var_15 = malloc(sizeof(int));                                                  // Tag.BODY
    int *var_7 = malloc(sizeof(int));                                                   // Tag.BODY
    free(var_7);                                                                        // Tag.BODY
    static pthread_mutex_t var_19;                                                      // Tag.BODY
    free(var_15);                                                                       // Tag.BODY
    static int var_13 = 5;                                                              // Tag.BODY
    --var_13;                                                                           // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_19);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_19);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER