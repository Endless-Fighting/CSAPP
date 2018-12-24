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
    char *var_19;                                                                       // Tag.BODY
    char var_15[2];                                                                     // Tag.BODY
    strcpy(var_15, var_19);                                                             // Tag.STRCPY_UNSAFE
    int var_8 = rand();                                                                 // Tag.BODY
    static int var_12 = 0;                                                              // Tag.BODY
    struct pthread_mutex_t var_13;                                                      // Tag.BODY
    static int var_4 = 9;                                                               // Tag.BODY
    struct pthread_cond_t var_14;                                                       // Tag.BODY
    pthread_mutex_lock(&var_13);                                                        // Tag.BODY
    ++var_4;                                                                            // Tag.BODY
    while(!var_12){                                                                     // Tag.BODY
       pthread_cond_wait(&var_14, &var_13);                                             // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_13);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER