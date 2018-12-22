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
    int *var_2 = malloc(sizeof(int));                                                   // Tag.BODY
    int *var_93 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_2);                                                                        // Tag.BODY
    free(var_93);                                                                       // Tag.BODY
    char var_31[35];                                                                    // Tag.BODY
    char *var_24;                                                                       // Tag.BODY
    strncpy(var_31, var_24, sizeof(var_31));                                            // Tag.STRCPY_SAFE
    *var_2 = 45;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER