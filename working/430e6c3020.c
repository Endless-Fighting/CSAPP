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
    int var_47;                                                          // Tag.BODY
    int *var_83;                                                         // Tag.BODY
    var_83 = malloc(sizeof(int));                                        // Tag.BODY
    *var_83 = 56;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_83);                                                        // Tag.BODY
    int var_58 = 9;                                                      // Tag.BODY
    while(var_58 < 80){                                                  // Tag.BODY
       var_47 = 5;                                                       // Tag.BODY
       var_58++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER