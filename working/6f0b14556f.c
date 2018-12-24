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
    int var_12;                                                                         // Tag.BODY
    char *var_7;                                                                        // Tag.BODY
    char var_17[6];                                                                     // Tag.BODY
    char *var_2;                                                                        // Tag.BODY
    char var_6[8];                                                                      // Tag.BODY
    int var_4 = 2;                                                                      // Tag.BODY
    if(var_4 > 3){                                                                      // Tag.BODY
       var_12 = 0;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    strncpy(var_6, var_2, sizeof(var_6));                                               // Tag.STRCPY_SAFE
    strcpy(var_17, var_7);                                                              // Tag.STRCPY_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER