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
    const int var_16 = 1;                                                               // Tag.BODY
    static int var_9 = 8;                                                               // Tag.BODY
    static int var_4 = 0;                                                               // Tag.BODY
    struct pthread_mutex_t var_14;                                                      // Tag.BODY
    struct pthread_cond_t var_2;                                                        // Tag.BODY
    pthread_mutex_lock(&var_14);                                                        // Tag.BODY
    var_9--;                                                                            // Tag.BODY
    if(!var_4){                                                                         // Tag.BODY
       pthread_cond_wait(&var_2, &var_14);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_14);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER