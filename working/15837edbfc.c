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
    static int var_84 = 21;                                                             // Tag.BODY
    struct pthread_cond_t var_75;                                                       // Tag.BODY
    static int var_19 = 0;                                                              // Tag.BODY
    struct pthread_mutex_t var_78;                                                      // Tag.BODY
    int *var_64;                                                                        // Tag.BODY
    pthread_mutex_lock(&var_78);                                                        // Tag.BODY
    var_84++;                                                                           // Tag.BODY
    while(!var_19){                                                                     // Tag.BODY
       pthread_cond_wait(&var_75, &var_78);                                             // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_78);                                                      // Tag.BODY
    var_64 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_64);                                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER