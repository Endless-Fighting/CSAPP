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
    int *var_18 = malloc(sizeof(int));                                   // Tag.BODY
    int *var_80;                                                         // Tag.BODY
    int *var_32 = malloc(sizeof(int));                                   // Tag.BODY
    free(var_18);                                                        // Tag.BODY
    *var_18 = 56;                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    var_80 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_32);                                                        // Tag.BODY
    free(var_80);                                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER