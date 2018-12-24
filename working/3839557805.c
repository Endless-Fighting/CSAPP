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
    struct pthread_cond_t var_9;                                                        // Tag.BODY
    int var_18;                                                                         // Tag.BODY
    int *var_2;                                                                         // Tag.BODY
    int var_16 = 0;                                                                     // Tag.BODY
    if(var_16 < 2){                                                                     // Tag.BODY
       var_18 = 6;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    struct pthread_mutex_t var_7;                                                       // Tag.BODY
    var_2 = malloc(sizeof(int));                                                        // Tag.BODY
    pthread_cond_signal(&var_9);                                                        // Tag.COND_SIGNAL_UNSAFE
    free(var_2);                                                                        // Tag.BODY
    pthread_mutex_unlock(&var_7);                                                       // Tag.BODY
    pthread_mutex_lock(&var_7);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER