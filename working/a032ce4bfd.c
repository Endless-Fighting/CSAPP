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
    int var_60;                                                          // Tag.BODY
    int *var_5 = malloc(sizeof(int));                                    // Tag.BODY
    free(var_5);                                                         // Tag.BODY
    char var_48[68];                                                     // Tag.BODY
    char *var_92;                                                        // Tag.BODY
    int var_34 = 32;                                                     // Tag.BODY
    while(var_34 < 58){                                                  // Tag.BODY
       var_60 = 36;                                                      // Tag.BODY
       var_34++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    strncpy(var_48, var_92, sizeof(var_48));                             // Tag.STRCPY_SAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER