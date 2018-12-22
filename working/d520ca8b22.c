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
    int *var_98;                                                         // Tag.BODY
    int *var_35 = malloc(sizeof(int));                                   // Tag.BODY
    *var_35 = 28;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    int *var_44;                                                         // Tag.BODY
    var_44 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_44);                                                        // Tag.BODY
    free(var_35);                                                        // Tag.BODY
    var_98 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_98);                                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER