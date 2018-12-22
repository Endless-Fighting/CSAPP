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
    int *var_80;                                                                        // Tag.BODY
    struct pthread_mutex_t var_41;                                                      // Tag.BODY
    var_80 = malloc(sizeof(int));                                                       // Tag.BODY
    int var_30;                                                                         // Tag.BODY
    for(int var_37 = 13; var_37 < 16; var_37++){                                        // Tag.BODY
       var_30 = 68;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    free(var_80);                                                                       // Tag.BODY
    static int var_59 = 0;                                                              // Tag.BODY
    static int var_75 = 52;                                                             // Tag.BODY
    struct pthread_cond_t var_22;                                                       // Tag.BODY
    pthread_mutex_lock(&var_41);                                                        // Tag.BODY
    var_75--;                                                                           // Tag.BODY
    if(!var_59){                                                                        // Tag.BODY
       pthread_cond_wait(&var_22, &var_41);                                             // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_41);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER