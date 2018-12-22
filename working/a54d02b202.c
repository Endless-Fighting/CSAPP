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
    static int var_47 = 16;                                              // Tag.BODY
    int var_30;                                                          // Tag.BODY
    struct pthread_mutex_t var_44;                                       // Tag.BODY
    int var_2 = 65;                                                      // Tag.BODY
    if(var_2 > 96){                                                      // Tag.BODY
       var_30 = 39;                                                      // Tag.BODY
    }                                                                    // Tag.BODY
    static int var_36 = 0;                                               // Tag.BODY
    int *var_75;                                                         // Tag.BODY
    var_75 = malloc(sizeof(int));                                        // Tag.BODY
    struct pthread_cond_t var_72;                                        // Tag.BODY
    pthread_mutex_lock(&var_44);                                         // Tag.BODY
    ++var_47;                                                            // Tag.BODY
    free(var_75);                                                        // Tag.BODY
    if(!var_36){                                                         // Tag.BODY
       pthread_cond_wait(&var_72, &var_44);                              // Tag.COND_WAIT_UNSAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_44);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER