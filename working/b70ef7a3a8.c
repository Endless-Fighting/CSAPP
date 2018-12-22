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
    int *var_80 = malloc(sizeof(int));                                   // Tag.BODY
    int var_86;                                                          // Tag.BODY
    int var_15 = 22;                                                     // Tag.BODY
    while(var_15 < 34){                                                  // Tag.BODY
       var_86 = 26;                                                      // Tag.BODY
       var_15++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    int *var_30;                                                         // Tag.BODY
    var_30 = malloc(sizeof(int));                                        // Tag.BODY
    *var_80 = 33;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_80);                                                        // Tag.BODY
    *var_30 = 90;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_30);                                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER