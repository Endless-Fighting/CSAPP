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
    int *var_3;                                                                         // Tag.BODY
    var_3 = malloc(sizeof(int));                                                        // Tag.BODY
    struct pthread_mutex_t var_4;                                                       // Tag.BODY
    static int var_2 = 0;                                                               // Tag.BODY
    struct pthread_cond_t var_7;                                                        // Tag.BODY
    static int var_14 = 10;                                                             // Tag.BODY
    free(var_3);                                                                        // Tag.BODY
    pthread_mutex_lock(&var_4);                                                         // Tag.BODY
    --var_14;                                                                           // Tag.BODY
    if(!var_2){                                                                         // Tag.BODY
       pthread_cond_wait(&var_7, &var_4);                                               // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_4);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER