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
    static int var_61 = 14;                                              // Tag.BODY
    int *var_22;                                                         // Tag.BODY
    int *var_21;                                                         // Tag.BODY
    static pthread_mutex_t var_24;                                       // Tag.BODY
    var_22 = malloc(sizeof(int));                                        // Tag.BODY
    pthread_mutex_lock(&var_24);                                         // Tag.BODY
    *var_22 = 34;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    pthread_mutex_unlock(&var_24);                                       // Tag.BODY
    free(var_22);                                                        // Tag.BODY
    var_61--;                                                            // Tag.RACE_COND_UNSAFE
    var_21 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_21);                                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER