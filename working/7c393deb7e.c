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
    int *var_64;                                                         // Tag.BODY
    int *var_62 = malloc(sizeof(int));                                   // Tag.BODY
    int *var_34 = malloc(sizeof(int));                                   // Tag.BODY
    struct pthread_mutex_t var_79;                                       // Tag.BODY
    free(var_62);                                                        // Tag.BODY
    *var_34 = 61;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_34);                                                        // Tag.BODY
    var_64 = malloc(sizeof(int));                                        // Tag.BODY
    struct pthread_cond_t var_13;                                        // Tag.BODY
    free(var_64);                                                        // Tag.BODY
    pthread_mutex_lock(&var_79);                                         // Tag.BODY
    pthread_mutex_unlock(&var_79);                                       // Tag.BODY
    pthread_cond_signal(&var_13);                                        // Tag.COND_SIGNAL_UNSAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER