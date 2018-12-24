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
    int var_13;                                                                         // Tag.BODY
    char var_3[5];                                                                      // Tag.BODY
    int *var_11;                                                                        // Tag.BODY
    for(int var_8 = 6; var_8 < 7; var_8++){                                             // Tag.BODY
       var_13 = 3;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    var_11 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_11);                                                                       // Tag.BODY
    int *var_0;                                                                         // Tag.BODY
    *var_11 = 2;                                                                        // Tag.MEMORY_MANAGEMENT_UNSAFE
    char *var_1;                                                                        // Tag.BODY
    var_0 = malloc(sizeof(int));                                                        // Tag.BODY
    strncpy(var_3, var_1, sizeof(var_3));                                               // Tag.STRCPY_SAFE
    free(var_0);                                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER