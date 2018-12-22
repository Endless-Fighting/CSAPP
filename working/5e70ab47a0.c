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
    int var_78;                                                                         // Tag.BODY
    for(int var_58 = 0; var_58 < 4; var_58++){                                          // Tag.BODY
       var_78 = 43;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    struct pthread_cond_t var_24;                                                       // Tag.BODY
    struct pthread_mutex_t var_9;                                                       // Tag.BODY
    pthread_mutex_unlock(&var_9);                                                       // Tag.BODY
    pthread_cond_signal(&var_24);                                                       // Tag.COND_SIGNAL_UNSAFE
    pthread_mutex_lock(&var_9);                                                         // Tag.BODY
    int *var_82 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_82);                                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER