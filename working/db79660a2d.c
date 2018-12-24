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
    struct pthread_cond_t var_15;                                                       // Tag.BODY
    struct pthread_mutex_t var_17;                                                      // Tag.BODY
    pthread_mutex_lock(&var_17);                                                        // Tag.BODY
    int *var_14;                                                                        // Tag.BODY
    pthread_cond_signal(&var_15);                                                       // Tag.COND_SIGNAL_SAFE
    pthread_mutex_unlock(&var_17);                                                      // Tag.BODY
    int var_13;                                                                         // Tag.BODY
    var_14 = malloc(sizeof(int));                                                       // Tag.BODY
    *var_14 = 7;                                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_14);                                                                       // Tag.BODY
    for(int var_3 = 0; var_3 < 2; var_3++){                                             // Tag.BODY
       var_13 = 5;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER