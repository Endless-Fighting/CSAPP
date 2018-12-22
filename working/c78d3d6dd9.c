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
    int var_99;                                                          // Tag.BODY
    char *var_87;                                                        // Tag.BODY
    char var_0[61];                                                      // Tag.BODY
    int var_60 = 28;                                                     // Tag.BODY
    while(var_60 < 54){                                                  // Tag.BODY
       var_99 = 32;                                                      // Tag.BODY
       var_60++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    strncpy(var_0, var_87, sizeof(var_0));                               // Tag.STRCPY_SAFE
    int *var_11 = malloc(sizeof(int));                                   // Tag.BODY
    free(var_11);                                                        // Tag.BODY
    static pthread_mutex_t var_66;                                       // Tag.BODY
    static int var_40 = 64;                                              // Tag.BODY
    pthread_mutex_unlock(&var_66);                                       // Tag.BODY
    ++var_40;                                                            // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_66);                                         // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER