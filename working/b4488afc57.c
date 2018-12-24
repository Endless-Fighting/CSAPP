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
    int var_10;                                                                         // Tag.BODY
    const int var_15 = 5;                                                               // Tag.BODY
    int *var_7;                                                                         // Tag.BODY
    int *var_0 = malloc(sizeof(int));                                                   // Tag.BODY
    var_7 = malloc(sizeof(int));                                                        // Tag.BODY
    *var_0 = 5;                                                                         // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_7);                                                                        // Tag.BODY
    for(int var_11 = 4; var_11 < 5; var_11++){                                          // Tag.BODY
       var_10 = 4;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    *var_7 = 9;                                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    free(var_0);                                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER