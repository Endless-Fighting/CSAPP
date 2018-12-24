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
    struct pthread_cond_t var_3;                                                        // Tag.BODY
    static int var_0 = 0;                                                               // Tag.BODY
    int var_2 = rand();                                                                 // Tag.BODY
    static int var_8 = 10;                                                              // Tag.BODY
    struct pthread_mutex_t var_16;                                                      // Tag.BODY
    pthread_mutex_lock(&var_16);                                                        // Tag.BODY
    var_8--;                                                                            // Tag.BODY
    while(!var_0){                                                                      // Tag.BODY
       pthread_cond_wait(&var_3, &var_16);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_16);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER