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
    int *var_26 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_26);                                                                       // Tag.BODY
    int *var_49;                                                                        // Tag.BODY
    var_49 = malloc(sizeof(int));                                                       // Tag.BODY
    *var_49 = 27;                                                                       // Tag.MEMORY_MANAGEMENT_SAFE
    int var_25;                                                                         // Tag.BODY
    int var_55 = 3;                                                                     // Tag.BODY
    if(var_55 < 46){                                                                    // Tag.BODY
       var_25 = 54;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    free(var_49);                                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER