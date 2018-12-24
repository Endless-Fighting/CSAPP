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
    int var_12;                                                                         // Tag.BODY
    struct pthread_mutex_t var_3;                                                       // Tag.BODY
    int *var_8 = malloc(sizeof(int));                                                   // Tag.BODY
    for(int var_15 = 3; var_15 < 5; var_15++){                                          // Tag.BODY
       var_12 = 7;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    int *var_11 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_11);                                                                       // Tag.BODY
    *var_11 = 7;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    struct pthread_cond_t var_14;                                                       // Tag.BODY
    pthread_cond_signal(&var_14);                                                       // Tag.COND_SIGNAL_UNSAFE
    pthread_mutex_unlock(&var_3);                                                       // Tag.BODY
    pthread_mutex_lock(&var_3);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER