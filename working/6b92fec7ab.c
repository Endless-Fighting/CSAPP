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
    static int var_14 = 56;                                                             // Tag.BODY
    static pthread_mutex_t var_18;                                                      // Tag.BODY
    ++var_14;                                                                           // Tag.RACE_COND_UNSAFE
    char *var_64;                                                                       // Tag.BODY
    char var_39[54];                                                                    // Tag.BODY
    strcpy(var_39, var_64);                                                             // Tag.STRCPY_UNSAFE
    int var_72;                                                                         // Tag.BODY
    pthread_mutex_lock(&var_18);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_18);                                                      // Tag.BODY
    for(int var_54 = 1; var_54 < 53; var_54++){                                         // Tag.BODY
       var_72 = 56;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER