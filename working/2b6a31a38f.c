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
    struct pthread_mutex_t var_51;                                       // Tag.BODY
    int var_22;                                                          // Tag.BODY
    int *var_53;                                                         // Tag.BODY
    struct pthread_cond_t var_23;                                        // Tag.BODY
    int var_55 = 63;                                                     // Tag.BODY
    while(var_55 < 83){                                                  // Tag.BODY
       var_22 = 56;                                                      // Tag.BODY
       var_55++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    pthread_mutex_lock(&var_51);                                         // Tag.BODY
    pthread_cond_signal(&var_23);                                        // Tag.COND_SIGNAL_SAFE
    var_53 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_53);                                                        // Tag.BODY
    pthread_mutex_unlock(&var_51);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER