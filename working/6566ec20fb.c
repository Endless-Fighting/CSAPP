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
    struct pthread_mutex_t var_17;                                                      // Tag.BODY
    static int var_1 = 0;                                                               // Tag.BODY
    struct pthread_cond_t var_12;                                                       // Tag.BODY
    char var_15[6];                                                                     // Tag.BODY
    static int var_2 = 0;                                                               // Tag.BODY
    int *var_3;                                                                         // Tag.BODY
    pthread_mutex_lock(&var_17);                                                        // Tag.BODY
    int *var_16 = malloc(sizeof(int));                                                  // Tag.BODY
    ++var_1;                                                                            // Tag.BODY
    if(!var_2){                                                                         // Tag.BODY
       pthread_cond_wait(&var_12, &var_17);                                             // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_17);                                                      // Tag.BODY
    char *var_8;                                                                        // Tag.BODY
    strncpy(var_15, var_8, sizeof(var_15));                                             // Tag.STRCPY_SAFE
    free(var_16);                                                                       // Tag.BODY
    var_3 = malloc(sizeof(int));                                                        // Tag.BODY
    free(var_3);                                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER