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
    int *var_17 = malloc(sizeof(int));                                                  // Tag.BODY
    struct pthread_mutex_t var_8;                                                       // Tag.BODY
    struct pthread_cond_t var_12;                                                       // Tag.BODY
    char *var_2;                                                                        // Tag.BODY
    free(var_17);                                                                       // Tag.BODY
    static int var_4 = 3;                                                               // Tag.BODY
    char var_9[5];                                                                      // Tag.BODY
    int var_5 = rand();                                                                 // Tag.BODY
    static int var_13 = 0;                                                              // Tag.BODY
    strcpy(var_9, var_2);                                                               // Tag.STRCPY_UNSAFE
    pthread_mutex_lock(&var_8);                                                         // Tag.BODY
    ++var_4;                                                                            // Tag.BODY
    if(!var_13){                                                                        // Tag.BODY
       pthread_cond_wait(&var_12, &var_8);                                              // Tag.COND_WAIT_UNSAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_8);                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER