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
    int *var_33 = malloc(sizeof(int));                                   // Tag.BODY
    free(var_33);                                                        // Tag.BODY
    static int var_97 = 0;                                               // Tag.BODY
    static int var_49 = 10;                                              // Tag.BODY
    struct pthread_cond_t var_5;                                         // Tag.BODY
    struct pthread_mutex_t var_53;                                       // Tag.BODY
    pthread_mutex_lock(&var_53);                                         // Tag.BODY
    var_49 = 4;                                                          // Tag.BODY
    while(!var_97){                                                      // Tag.BODY
       pthread_cond_wait(&var_5, &var_53);                               // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_53);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER