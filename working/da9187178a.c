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
    struct pthread_mutex_t var_11;                                                      // Tag.BODY
    int var_15 = rand();                                                                // Tag.BODY
    int *var_10 = malloc(sizeof(int));                                                  // Tag.BODY
    struct pthread_cond_t var_9;                                                        // Tag.BODY
    free(var_10);                                                                       // Tag.BODY
    int *var_5;                                                                         // Tag.BODY
    static int var_13 = 8;                                                              // Tag.BODY
    static int var_4 = 0;                                                               // Tag.BODY
    var_5 = malloc(sizeof(int));                                                        // Tag.BODY
    *var_5 = 2;                                                                         // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_5);                                                                        // Tag.BODY
    pthread_mutex_lock(&var_11);                                                        // Tag.BODY
    var_13--;                                                                           // Tag.BODY
    while(!var_4){                                                                      // Tag.BODY
       pthread_cond_wait(&var_9, &var_11);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_11);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER