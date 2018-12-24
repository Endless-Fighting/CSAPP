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
    int *var_7 = malloc(sizeof(int));                                                   // Tag.BODY
    free(var_7);                                                                        // Tag.BODY
    static pthread_mutex_t var_12;                                                      // Tag.BODY
    char var_11[1];                                                                     // Tag.BODY
    char *var_14;                                                                       // Tag.BODY
    int *var_6 = malloc(sizeof(int));                                                   // Tag.BODY
    strncpy(var_11, var_14, sizeof(var_11));                                            // Tag.STRCPY_SAFE
    static int var_1 = 6;                                                               // Tag.BODY
    free(var_6);                                                                        // Tag.BODY
    pthread_mutex_unlock(&var_12);                                                      // Tag.BODY
    pthread_mutex_lock(&var_12);                                                        // Tag.BODY
    var_1 = 2;                                                                          // Tag.RACE_COND_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER