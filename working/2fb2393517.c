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
    int *var_5 = malloc(sizeof(int));                                                   // Tag.BODY
    free(var_5);                                                                        // Tag.BODY
    int *var_11;                                                                        // Tag.BODY
    int *var_8;                                                                         // Tag.BODY
    var_8 = malloc(sizeof(int));                                                        // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    *var_5 = 5;                                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    var_11 = malloc(sizeof(int));                                                       // Tag.BODY
    *var_8 = 1;                                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    int var_9;                                                                          // Tag.BODY
    free(var_11);                                                                       // Tag.BODY
    int var_4 = 1;                                                                      // Tag.BODY
    while(var_4 < 7){                                                                   // Tag.BODY
       var_9 = 7;                                                                       // Tag.BODY
       var_4++;                                                                         // Tag.BODY
    }                                                                                   // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER