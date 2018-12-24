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
    int var_0 = rand();                                                                 // Tag.BODY
    int var_15;                                                                         // Tag.BODY
    static pthread_mutex_t var_13;                                                      // Tag.BODY
    int var_12 = 3;                                                                     // Tag.BODY
    if(var_12 > 5){                                                                     // Tag.BODY
       var_15 = 6;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    static int var_7 = 4;                                                               // Tag.BODY
    var_7++;                                                                            // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_13);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_13);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER