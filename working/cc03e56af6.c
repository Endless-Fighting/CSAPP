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
    int *var_11 = malloc(sizeof(int));                                                  // Tag.BODY
    int *var_8 = malloc(sizeof(int));                                                   // Tag.BODY
    static pthread_mutex_t var_4;                                                       // Tag.BODY
    static int var_7 = 9;                                                               // Tag.BODY
    free(var_8);                                                                        // Tag.BODY
    free(var_11);                                                                       // Tag.BODY
    *var_8 = 4;                                                                         // Tag.MEMORY_MANAGEMENT_UNSAFE
    pthread_mutex_unlock(&var_4);                                                       // Tag.BODY
    var_7++;                                                                            // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_4);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER