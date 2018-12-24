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
    char *var_10;                                                                       // Tag.BODY
    static int var_17 = 4;                                                              // Tag.BODY
    char var_19[6];                                                                     // Tag.BODY
    struct pthread_mutex_t var_18;                                                      // Tag.BODY
    int var_13;                                                                         // Tag.BODY
    static int var_14 = 0;                                                              // Tag.BODY
    for(int var_8 = 7; var_8 < 9; var_8++){                                             // Tag.BODY
       var_13 = 1;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    int *var_0 = malloc(sizeof(int));                                                   // Tag.BODY
    strncpy(var_19, var_10, sizeof(var_19));                                            // Tag.STRCPY_SAFE
    free(var_0);                                                                        // Tag.BODY
    struct pthread_cond_t var_4;                                                        // Tag.BODY
    pthread_mutex_lock(&var_18);                                                        // Tag.BODY
    var_17 = 0;                                                                         // Tag.BODY
    if(!var_14){                                                                        // Tag.BODY
       pthread_cond_wait(&var_4, &var_18);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_18);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER