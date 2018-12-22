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
    int var_8;                                                                          // Tag.BODY
    int var_29 = 42;                                                                    // Tag.BODY
    while(var_29 < 62){                                                                 // Tag.BODY
       var_8 = 66;                                                                      // Tag.BODY
       var_29++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    struct pthread_mutex_t var_63;                                                      // Tag.BODY
    struct pthread_cond_t var_28;                                                       // Tag.BODY
    int var_56;                                                                         // Tag.BODY
    int var_16 = 42;                                                                    // Tag.BODY
    while(var_16 < 68){                                                                 // Tag.BODY
       var_56 = 85;                                                                     // Tag.BODY
       var_16++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    pthread_mutex_lock(&var_63);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_63);                                                      // Tag.BODY
    pthread_cond_signal(&var_28);                                                       // Tag.COND_SIGNAL_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER