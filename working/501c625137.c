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
    int *var_94 = malloc(sizeof(int));                                   // Tag.BODY
    int var_18;                                                          // Tag.BODY
    free(var_94);                                                        // Tag.BODY
    for(int var_41 = 36; var_41 < 89; var_41++){                         // Tag.BODY
       var_18 = 61;                                                      // Tag.BODY
    }                                                                    // Tag.BODY
    *var_94 = 67;                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER