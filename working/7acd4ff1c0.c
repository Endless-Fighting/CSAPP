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
    int *var_17 = malloc(sizeof(int));                                                  // Tag.BODY
    struct pthread_cond_t var_0;                                                        // Tag.BODY
    int *var_13;                                                                        // Tag.BODY
    *var_17 = 0;                                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    var_13 = malloc(sizeof(int));                                                       // Tag.BODY
    struct pthread_mutex_t var_1;                                                       // Tag.BODY
    pthread_mutex_lock(&var_1);                                                         // Tag.BODY
    free(var_17);                                                                       // Tag.BODY
    free(var_13);                                                                       // Tag.BODY
    pthread_mutex_unlock(&var_1);                                                       // Tag.BODY
    pthread_cond_signal(&var_0);                                                        // Tag.COND_SIGNAL_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER