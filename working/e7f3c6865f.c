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
    struct pthread_mutex_t var_5;                                                       // Tag.BODY
    static int var_7 = 7;                                                               // Tag.BODY
    struct pthread_cond_t var_15;                                                       // Tag.BODY
    int var_11;                                                                         // Tag.BODY
    int var_8;                                                                          // Tag.BODY
    static int var_17 = 0;                                                              // Tag.BODY
    pthread_mutex_lock(&var_5);                                                         // Tag.BODY
    for(int var_16 = 8; var_16 < 9; var_16++){                                          // Tag.BODY
       var_8 = 10;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    for(int var_18 = 0; var_18 < 7; var_18++){                                          // Tag.BODY
       var_11 = 0;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    var_7--;                                                                            // Tag.BODY
    if(!var_17){                                                                        // Tag.BODY
       pthread_cond_wait(&var_15, &var_5);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_5);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER