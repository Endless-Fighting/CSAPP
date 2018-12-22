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
    struct pthread_cond_t var_5;                                                        // Tag.BODY
    static int var_3 = 0;                                                               // Tag.BODY
    int var_26;                                                                         // Tag.BODY
    static int var_32 = 30;                                                             // Tag.BODY
    struct pthread_mutex_t var_66;                                                      // Tag.BODY
    pthread_mutex_lock(&var_66);                                                        // Tag.BODY
    int var_47;                                                                         // Tag.BODY
    int var_10 = 46;                                                                    // Tag.BODY
    while(var_10 < 74){                                                                 // Tag.BODY
       var_26 = 16;                                                                     // Tag.BODY
       var_10++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    var_32++;                                                                           // Tag.BODY
    while(!var_3){                                                                      // Tag.BODY
       pthread_cond_wait(&var_5, &var_66);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_66);                                                      // Tag.BODY
    for(int var_24 = 36; var_24 < 74; var_24++){                                        // Tag.BODY
       var_47 = 17;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER