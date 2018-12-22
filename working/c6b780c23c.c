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
    int var_85;                                                          // Tag.BODY
    struct pthread_mutex_t var_46;                                       // Tag.BODY
    int *var_42;                                                         // Tag.BODY
    var_42 = malloc(sizeof(int));                                        // Tag.BODY
    struct pthread_cond_t var_7;                                         // Tag.BODY
    pthread_mutex_lock(&var_46);                                         // Tag.BODY
    *var_42 = 23;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    pthread_cond_signal(&var_7);                                         // Tag.COND_SIGNAL_SAFE
    pthread_mutex_unlock(&var_46);                                       // Tag.BODY
    int *var_43;                                                         // Tag.BODY
    free(var_42);                                                        // Tag.BODY
    var_43 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_43);                                                        // Tag.BODY
    int var_49 = 29;                                                     // Tag.BODY
    if(var_49 < 50){                                                     // Tag.BODY
       var_85 = 7;                                                       // Tag.BODY
    }                                                                    // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER