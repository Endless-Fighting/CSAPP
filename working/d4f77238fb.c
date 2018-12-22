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
    static pthread_mutex_t var_5;                                        // Tag.BODY
    static int var_26 = 55;                                              // Tag.BODY
    int *var_6 = malloc(sizeof(int));                                    // Tag.BODY
    int *var_94 = malloc(sizeof(int));                                   // Tag.BODY
    var_26++;                                                            // Tag.RACE_COND_UNSAFE
    free(var_94);                                                        // Tag.BODY
    pthread_mutex_lock(&var_5);                                          // Tag.BODY
    *var_94 = 63;                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    pthread_mutex_unlock(&var_5);                                        // Tag.BODY
    free(var_6);                                                         // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER