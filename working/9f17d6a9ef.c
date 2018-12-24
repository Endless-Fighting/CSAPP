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
    int *var_8;                                                                         // Tag.BODY
    var_8 = malloc(sizeof(int));                                                        // Tag.BODY
    int *var_14;                                                                        // Tag.BODY
    var_14 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_14);                                                                       // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    int var_3 = rand();                                                                 // Tag.BODY
    char *var_2;                                                                        // Tag.BODY
    *var_8 = 10;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    char var_0[0];                                                                      // Tag.BODY
    strcpy(var_0, var_2);                                                               // Tag.STRCPY_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER