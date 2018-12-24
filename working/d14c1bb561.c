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
    static int var_2 = 10;                                                              // Tag.BODY
    int *var_5;                                                                         // Tag.BODY
    struct pthread_mutex_t var_17;                                                      // Tag.BODY
    const int var_19 = 4;                                                               // Tag.BODY
    int var_14;                                                                         // Tag.BODY
    int var_3 = 1;                                                                      // Tag.BODY
    if(var_3 > 2){                                                                      // Tag.BODY
       var_14 = 0;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    struct pthread_cond_t var_4;                                                        // Tag.BODY
    var_5 = malloc(sizeof(int));                                                        // Tag.BODY
    static int var_13 = 0;                                                              // Tag.BODY
    pthread_mutex_lock(&var_17);                                                        // Tag.BODY
    var_2 = 5;                                                                          // Tag.BODY
    while(!var_13){                                                                     // Tag.BODY
       pthread_cond_wait(&var_4, &var_17);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    free(var_5);                                                                        // Tag.BODY
    *var_5 = 6;                                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    pthread_mutex_unlock(&var_17);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER