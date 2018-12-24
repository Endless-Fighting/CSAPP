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
    int *var_8;                                                                         // Tag.BODY
    var_8 = malloc(sizeof(int));                                                        // Tag.BODY
    static pthread_mutex_t var_12;                                                      // Tag.BODY
    static int var_17 = 4;                                                              // Tag.BODY
    pthread_mutex_unlock(&var_12);                                                      // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    pthread_mutex_lock(&var_12);                                                        // Tag.BODY
    var_17 = 4;                                                                         // Tag.RACE_COND_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER