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
    char var_8[9];                                                                      // Tag.BODY
    char *var_2;                                                                        // Tag.BODY
    int *var_4 = malloc(sizeof(int));                                                   // Tag.BODY
    free(var_4);                                                                        // Tag.BODY
    static int var_9 = 0;                                                               // Tag.BODY
    strncpy(var_8, var_2, sizeof(var_8));                                               // Tag.STRCPY_SAFE
    struct pthread_mutex_t var_7;                                                       // Tag.BODY
    struct pthread_cond_t var_19;                                                       // Tag.BODY
    static int var_17 = 2;                                                              // Tag.BODY
    pthread_mutex_lock(&var_7);                                                         // Tag.BODY
    var_17--;                                                                           // Tag.BODY
    while(!var_9){                                                                      // Tag.BODY
       pthread_cond_wait(&var_19, &var_7);                                              // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_7);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER