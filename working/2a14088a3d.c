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
    const int var_1 = 4;                                                                // Tag.BODY
    struct pthread_mutex_t var_9;                                                       // Tag.BODY
    struct pthread_cond_t var_16;                                                       // Tag.BODY
    pthread_mutex_unlock(&var_9);                                                       // Tag.BODY
    pthread_cond_signal(&var_16);                                                       // Tag.COND_SIGNAL_UNSAFE
    pthread_mutex_lock(&var_9);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER