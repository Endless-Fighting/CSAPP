#include <stdlib.h>                                                      // Tag.OTHER
#include <string.h>                                                      // Tag.OTHER
struct pthread_mutex_t{ int i; };                                        // Tag.OTHER
struct pthread_cond_t{ int i; };                                         // Tag.OTHER
int pthread_mutex_lock(struct pthread_mutex_t*){}                        // Tag.OTHER
int pthread_mutex_unlock(struct pthread_mutex_t*){}                      // Tag.OTHER
void pthread_cond_wait(struct pthread_cond_t*, struct pthread_mutex_t*); // Tag.OTHER
void pthread_cond_signal(struct pthread_cond_t*);                        // Tag.OTHER
int main()                                                               // Tag.OTHER
{                                                                        // Tag.OTHER
    int *var_53 = malloc(sizeof(int));                                   // Tag.BODY
    static int var_93 = 5;                                               // Tag.BODY
    int *var_43 = malloc(sizeof(int));                                   // Tag.BODY
    struct pthread_mutex_t var_19;                                       // Tag.BODY
    static int var_12 = 0;                                               // Tag.BODY
    free(var_43);                                                        // Tag.BODY
    struct pthread_cond_t var_21;                                        // Tag.BODY
    pthread_mutex_lock(&var_19);                                         // Tag.BODY
    free(var_53);                                                        // Tag.BODY
    --var_93;                                                            // Tag.BODY
    while(!var_12){                                                      // Tag.BODY
       pthread_cond_wait(&var_21, &var_19);                              // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_19);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER