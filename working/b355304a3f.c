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
    int *var_4;                                                          // Tag.BODY
    var_4 = malloc(sizeof(int));                                         // Tag.BODY
    int *var_39;                                                         // Tag.BODY
    int *var_68 = malloc(sizeof(int));                                   // Tag.BODY
    free(var_68);                                                        // Tag.BODY
    struct pthread_cond_t var_56;                                        // Tag.BODY
    struct pthread_mutex_t var_50;                                       // Tag.BODY
    pthread_mutex_lock(&var_50);                                         // Tag.BODY
    free(var_4);                                                         // Tag.BODY
    var_39 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_39);                                                        // Tag.BODY
    pthread_cond_signal(&var_56);                                        // Tag.COND_SIGNAL_SAFE
    pthread_mutex_unlock(&var_50);                                       // Tag.BODY
    *var_39 = 0;                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER