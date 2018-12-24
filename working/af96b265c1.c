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
    int *var_19;                                                                        // Tag.BODY
    var_19 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_19);                                                                       // Tag.BODY
    static int var_11 = 0;                                                              // Tag.BODY
    struct pthread_cond_t var_5;                                                        // Tag.BODY
    static int var_0 = 7;                                                               // Tag.BODY
    struct pthread_mutex_t var_18;                                                      // Tag.BODY
    pthread_mutex_lock(&var_18);                                                        // Tag.BODY
    var_0++;                                                                            // Tag.BODY
    if(!var_11){                                                                        // Tag.BODY
       pthread_cond_wait(&var_5, &var_18);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_18);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER