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
    int *var_4 = malloc(sizeof(int));                                                   // Tag.BODY
    int var_1;                                                                          // Tag.BODY
    free(var_4);                                                                        // Tag.BODY
    struct pthread_cond_t var_2;                                                        // Tag.BODY
    struct pthread_mutex_t var_16;                                                      // Tag.BODY
    int var_15 = 0;                                                                     // Tag.BODY
    while(var_15 < 8){                                                                  // Tag.BODY
       var_1 = 10;                                                                      // Tag.BODY
       var_15++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    pthread_mutex_lock(&var_16);                                                        // Tag.BODY
    *var_4 = 7;                                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    pthread_cond_signal(&var_2);                                                        // Tag.COND_SIGNAL_SAFE
    pthread_mutex_unlock(&var_16);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER