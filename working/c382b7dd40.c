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
    struct pthread_mutex_t var_3;                                                       // Tag.BODY
    int *var_8 = malloc(sizeof(int));                                                   // Tag.BODY
    static int var_7 = 0;                                                               // Tag.BODY
    int *var_16;                                                                        // Tag.BODY
    static int var_15 = 0;                                                              // Tag.BODY
    var_16 = malloc(sizeof(int));                                                       // Tag.BODY
    struct pthread_cond_t var_12;                                                       // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    pthread_mutex_lock(&var_3);                                                         // Tag.BODY
    var_15 = 6;                                                                         // Tag.BODY
    int var_18 = rand();                                                                // Tag.BODY
    *var_16 = 5;                                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    while(!var_7){                                                                      // Tag.BODY
       pthread_cond_wait(&var_12, &var_3);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_3);                                                       // Tag.BODY
    free(var_16);                                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER