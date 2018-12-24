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
    static int var_12 = 5;                                                              // Tag.BODY
    static pthread_mutex_t var_13;                                                      // Tag.BODY
    int var_6;                                                                          // Tag.BODY
    char var_8[5];                                                                      // Tag.BODY
    int var_15 = 7;                                                                     // Tag.BODY
    if(var_15 == 8){                                                                    // Tag.BODY
       var_6 = 0;                                                                       // Tag.BODY
    }                                                                                   // Tag.BODY
    --var_12;                                                                           // Tag.RACE_COND_UNSAFE
    char *var_1;                                                                        // Tag.BODY
    strcpy(var_8, var_1);                                                               // Tag.STRCPY_UNSAFE
    pthread_mutex_lock(&var_13);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_13);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER