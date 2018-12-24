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
    int var_11;                                                                         // Tag.BODY
    int *var_18;                                                                        // Tag.BODY
    struct pthread_mutex_t var_7;                                                       // Tag.BODY
    int var_17 = rand();                                                                // Tag.BODY
    var_18 = malloc(sizeof(int));                                                       // Tag.BODY
    int var_6 = 1;                                                                      // Tag.BODY
    while(var_6 < 6){                                                                   // Tag.BODY
       var_11 = 4;                                                                      // Tag.BODY
       var_6++;                                                                         // Tag.BODY
    }                                                                                   // Tag.BODY
    struct pthread_cond_t var_12;                                                       // Tag.BODY
    static int var_14 = 0;                                                              // Tag.BODY
    free(var_18);                                                                       // Tag.BODY
    static int var_8 = 0;                                                               // Tag.BODY
    *var_18 = 0;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    pthread_mutex_lock(&var_7);                                                         // Tag.BODY
    var_14++;                                                                           // Tag.BODY
    while(!var_8){                                                                      // Tag.BODY
       pthread_cond_wait(&var_12, &var_7);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_7);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER