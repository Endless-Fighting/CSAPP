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
    int *var_26;                                                                        // Tag.BODY
    int *var_34;                                                                        // Tag.BODY
    var_34 = malloc(sizeof(int));                                                       // Tag.BODY
    struct pthread_cond_t var_78;                                                       // Tag.BODY
    var_26 = malloc(sizeof(int));                                                       // Tag.BODY
    static int var_18 = 0;                                                              // Tag.BODY
    free(var_26);                                                                       // Tag.BODY
    struct pthread_mutex_t var_94;                                                      // Tag.BODY
    static int var_38 = 11;                                                             // Tag.BODY
    free(var_34);                                                                       // Tag.BODY
    pthread_mutex_lock(&var_94);                                                        // Tag.BODY
    var_38++;                                                                           // Tag.BODY
    while(!var_18){                                                                     // Tag.BODY
       pthread_cond_wait(&var_78, &var_94);                                             // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_94);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER