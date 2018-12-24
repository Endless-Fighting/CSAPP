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
    static int var_10 = 0;                                                              // Tag.BODY
    static int var_13 = 5;                                                              // Tag.BODY
    char *var_11;                                                                       // Tag.BODY
    struct pthread_mutex_t var_14;                                                      // Tag.BODY
    const int var_7 = 7;                                                                // Tag.BODY
    char var_4[3];                                                                      // Tag.BODY
    struct pthread_cond_t var_6;                                                        // Tag.BODY
    strncpy(var_4, var_11, sizeof(var_4));                                              // Tag.STRCPY_SAFE
    pthread_mutex_lock(&var_14);                                                        // Tag.BODY
    var_13 = 7;                                                                         // Tag.BODY
    if(!var_10){                                                                        // Tag.BODY
       pthread_cond_wait(&var_6, &var_14);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_14);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER