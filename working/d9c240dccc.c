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
    int *var_5;                                                                         // Tag.BODY
    var_5 = malloc(sizeof(int));                                                        // Tag.BODY
    struct pthread_cond_t var_9;                                                        // Tag.BODY
    int var_19;                                                                         // Tag.BODY
    for(int var_12 = 1; var_12 < 9; var_12++){                                          // Tag.BODY
       var_19 = 5;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    free(var_5);                                                                        // Tag.BODY
    struct pthread_mutex_t var_1;                                                       // Tag.BODY
    pthread_mutex_unlock(&var_1);                                                       // Tag.BODY
    pthread_cond_signal(&var_9);                                                        // Tag.COND_SIGNAL_UNSAFE
    pthread_mutex_lock(&var_1);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER