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
    char *var_5;                                                                        // Tag.BODY
    struct pthread_mutex_t var_17;                                                      // Tag.BODY
    int var_15;                                                                         // Tag.BODY
    for(int var_2 = 2; var_2 < 4; var_2++){                                             // Tag.BODY
       var_15 = 2;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    char var_14[10];                                                                    // Tag.BODY
    strcpy(var_14, var_5);                                                              // Tag.STRCPY_UNSAFE
    int *var_13;                                                                        // Tag.BODY
    static int var_7 = 2;                                                               // Tag.BODY
    var_13 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_13);                                                                       // Tag.BODY
    struct pthread_cond_t var_11;                                                       // Tag.BODY
    static int var_18 = 0;                                                              // Tag.BODY
    pthread_mutex_lock(&var_17);                                                        // Tag.BODY
    var_7 = 0;                                                                          // Tag.BODY
    if(!var_18){                                                                        // Tag.BODY
       pthread_cond_wait(&var_11, &var_17);                                             // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_17);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER