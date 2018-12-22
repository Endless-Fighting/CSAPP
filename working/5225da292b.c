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
    struct pthread_cond_t var_51;                                                       // Tag.BODY
    int *var_94 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_94);                                                                       // Tag.BODY
    struct pthread_mutex_t var_60;                                                      // Tag.BODY
    char *var_98;                                                                       // Tag.BODY
    static int var_84 = 51;                                                             // Tag.BODY
    static int var_96 = 0;                                                              // Tag.BODY
    pthread_mutex_lock(&var_60);                                                        // Tag.BODY
    ++var_84;                                                                           // Tag.BODY
    char var_0[57];                                                                     // Tag.BODY
    strcpy(var_0, var_98);                                                              // Tag.STRCPY_UNSAFE
    while(!var_96){                                                                     // Tag.BODY
       pthread_cond_wait(&var_51, &var_60);                                             // Tag.COND_WAIT_SAFE
    }                                                                                   // Tag.BODY
    pthread_mutex_unlock(&var_60);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER