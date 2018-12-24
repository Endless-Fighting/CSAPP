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
    int var_14 = rand();                                                                // Tag.BODY
    int *var_10;                                                                        // Tag.BODY
    var_10 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_10);                                                                       // Tag.BODY
    *var_10 = 2;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    struct pthread_cond_t var_1;                                                        // Tag.BODY
    struct pthread_mutex_t var_12;                                                      // Tag.BODY
    static int var_6 = 9;                                                               // Tag.BODY
    static int var_5 = 0;                                                               // Tag.BODY
    pthread_mutex_lock(&var_12);                                                        // Tag.BODY
    ++var_6;                                                                            // Tag.BODY
    while(!var_5){                                                                      // Tag.BODY
       pthread_cond_wait(&var_1, &var_12);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_12);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER