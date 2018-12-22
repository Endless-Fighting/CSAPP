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
    int *var_20 = malloc(sizeof(int));                                   // Tag.BODY
    int var_45;                                                          // Tag.BODY
    free(var_20);                                                        // Tag.BODY
    struct pthread_cond_t var_19;                                        // Tag.BODY
    for(int var_64 = 24; var_64 < 43; var_64++){                         // Tag.BODY
       var_45 = 18;                                                      // Tag.BODY
    }                                                                    // Tag.BODY
    char *var_58;                                                        // Tag.BODY
    struct pthread_mutex_t var_85;                                       // Tag.BODY
    pthread_mutex_lock(&var_85);                                         // Tag.BODY
    char var_30[99];                                                     // Tag.BODY
    pthread_mutex_unlock(&var_85);                                       // Tag.BODY
    pthread_cond_signal(&var_19);                                        // Tag.COND_SIGNAL_UNSAFE
    strcpy(var_30, var_58);                                              // Tag.STRCPY_UNSAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER