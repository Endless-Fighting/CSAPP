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
    struct pthread_mutex_t var_4;                                                       // Tag.BODY
    int *var_11 = malloc(sizeof(int));                                                  // Tag.BODY
    static int var_16 = 0;                                                              // Tag.BODY
    free(var_11);                                                                       // Tag.BODY
    int var_7 = rand();                                                                 // Tag.BODY
    *var_11 = 7;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    static int var_0 = 3;                                                               // Tag.BODY
    struct pthread_cond_t var_12;                                                       // Tag.BODY
    pthread_mutex_lock(&var_4);                                                         // Tag.BODY
    ++var_0;                                                                            // Tag.BODY
    if(!var_16){                                                                        // Tag.BODY
       pthread_cond_wait(&var_12, &var_4);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_4);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER