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
    struct pthread_cond_t var_7;                                                        // Tag.BODY
    const int var_10 = 6;                                                               // Tag.BODY
    int var_16 = rand();                                                                // Tag.BODY
    struct pthread_mutex_t var_4;                                                       // Tag.BODY
    pthread_mutex_lock(&var_4);                                                         // Tag.BODY
    pthread_cond_signal(&var_7);                                                        // Tag.COND_SIGNAL_SAFE
    pthread_mutex_unlock(&var_4);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER