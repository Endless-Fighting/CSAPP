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
    static int var_16 = 1;                                                              // Tag.BODY
    static pthread_mutex_t var_1;                                                       // Tag.BODY
    int *var_6;                                                                         // Tag.BODY
    pthread_mutex_lock(&var_1);                                                         // Tag.BODY
    --var_16;                                                                           // Tag.RACE_COND_SAFE
    int var_2;                                                                          // Tag.BODY
    var_6 = malloc(sizeof(int));                                                        // Tag.BODY
    pthread_mutex_unlock(&var_1);                                                       // Tag.BODY
    for(int var_10 = 6; var_10 < 8; var_10++){                                          // Tag.BODY
       var_2 = 10;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    free(var_6);                                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER