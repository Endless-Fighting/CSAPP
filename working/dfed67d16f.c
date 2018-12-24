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
    static pthread_mutex_t var_11;                                                      // Tag.BODY
    static int var_14 = 4;                                                              // Tag.BODY
    pthread_mutex_lock(&var_11);                                                        // Tag.BODY
    int *var_9 = malloc(sizeof(int));                                                   // Tag.BODY
    int var_4 = rand();                                                                 // Tag.BODY
    *var_9 = 7;                                                                         // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_9);                                                                        // Tag.BODY
    var_14--;                                                                           // Tag.RACE_COND_SAFE
    pthread_mutex_unlock(&var_11);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER