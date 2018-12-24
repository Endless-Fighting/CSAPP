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
    static int var_7 = 0;                                                               // Tag.BODY
    int var_8;                                                                          // Tag.BODY
    struct pthread_mutex_t var_17;                                                      // Tag.BODY
    struct pthread_cond_t var_4;                                                        // Tag.BODY
    static int var_5 = 8;                                                               // Tag.BODY
    int var_3 = 4;                                                                      // Tag.BODY
    if(var_3 < 6){                                                                      // Tag.BODY
       var_8 = 2;                                                                       // Tag.BODY
    }                                                                                   // Tag.BODY
    pthread_mutex_lock(&var_17);                                                        // Tag.BODY
    char *var_19;                                                                       // Tag.BODY
    var_5++;                                                                            // Tag.BODY
    char var_11[7];                                                                     // Tag.BODY
    while(!var_7){                                                                      // Tag.BODY
       pthread_cond_wait(&var_4, &var_17);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    strcpy(var_11, var_19);                                                             // Tag.STRCPY_UNSAFE
    pthread_mutex_unlock(&var_17);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER