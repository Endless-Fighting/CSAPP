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
    static pthread_mutex_t var_14;                                                      // Tag.BODY
    int var_4;                                                                          // Tag.BODY
    static int var_13 = 9;                                                              // Tag.BODY
    pthread_mutex_unlock(&var_14);                                                      // Tag.BODY
    int var_11 = 5;                                                                     // Tag.BODY
    while(var_11 < 6){                                                                  // Tag.BODY
       var_4 = 2;                                                                       // Tag.BODY
       var_11++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    var_13--;                                                                           // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_14);                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER