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
    int *var_28 = malloc(sizeof(int));                                   // Tag.BODY
    *var_28 = 3;                                                         // Tag.MEMORY_MANAGEMENT_SAFE
    int *var_41;                                                         // Tag.BODY
    var_41 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_41);                                                        // Tag.BODY
    int *var_59 = malloc(sizeof(int));                                   // Tag.BODY
    *var_59 = 8;                                                         // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_28);                                                        // Tag.BODY
    free(var_59);                                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER