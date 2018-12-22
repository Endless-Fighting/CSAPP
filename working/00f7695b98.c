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
    int *var_82;                                                                        // Tag.BODY
    int var_16;                                                                         // Tag.BODY
    int var_52 = 23;                                                                    // Tag.BODY
    while(var_52 < 54){                                                                 // Tag.BODY
       var_16 = 75;                                                                     // Tag.BODY
       var_52++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    var_82 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_82);                                                                       // Tag.BODY
    int *var_42;                                                                        // Tag.BODY
    var_42 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_42);                                                                       // Tag.BODY
    *var_42 = 29;                                                                       // Tag.MEMORY_MANAGEMENT_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER