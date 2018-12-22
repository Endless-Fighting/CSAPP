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
    struct pthread_mutex_t var_28;                                       // Tag.BODY
    int *var_57;                                                         // Tag.BODY
    var_57 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_57);                                                        // Tag.BODY
    struct pthread_cond_t var_81;                                        // Tag.BODY
    static int var_30 = 0;                                               // Tag.BODY
    static int var_20 = 42;                                              // Tag.BODY
    pthread_mutex_lock(&var_28);                                         // Tag.BODY
    ++var_20;                                                            // Tag.BODY
    while(!var_30){                                                      // Tag.BODY
       pthread_cond_wait(&var_81, &var_28);                              // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_28);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER