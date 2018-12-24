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
    char *var_16;                                                                       // Tag.BODY
    char var_19[9];                                                                     // Tag.BODY
    int var_2;                                                                          // Tag.BODY
    int *var_18;                                                                        // Tag.BODY
    int var_1 = 4;                                                                      // Tag.BODY
    while(var_1 < 9){                                                                   // Tag.BODY
       var_2 = 6;                                                                       // Tag.BODY
       var_1++;                                                                         // Tag.BODY
    }                                                                                   // Tag.BODY
    strncpy(var_19, var_16, sizeof(var_19));                                            // Tag.STRCPY_SAFE
    var_18 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_18);                                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER