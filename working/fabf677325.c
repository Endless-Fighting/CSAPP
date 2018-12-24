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
    char var_11[0];                                                                     // Tag.BODY
    int var_14 = rand();                                                                // Tag.BODY
    static int var_8 = 10;                                                              // Tag.BODY
    char *var_16;                                                                       // Tag.BODY
    strcpy(var_11, var_16);                                                             // Tag.STRCPY_UNSAFE
    static pthread_mutex_t var_6;                                                       // Tag.BODY
    pthread_mutex_unlock(&var_6);                                                       // Tag.BODY
    ++var_8;                                                                            // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_6);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER