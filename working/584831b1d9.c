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
    int *var_67;                                                         // Tag.BODY
    int *var_1;                                                          // Tag.BODY
    var_1 = malloc(sizeof(int));                                         // Tag.BODY
    var_67 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_67);                                                        // Tag.BODY
    free(var_1);                                                         // Tag.BODY
    *var_1 = 87;                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER