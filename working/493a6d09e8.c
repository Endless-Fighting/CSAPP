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
    int *var_4 = malloc(sizeof(int));                                                   // Tag.BODY
    static int var_55 = 32;                                                             // Tag.BODY
    int *var_89;                                                                        // Tag.BODY
    var_89 = malloc(sizeof(int));                                                       // Tag.BODY
    free(var_89);                                                                       // Tag.BODY
    *var_89 = 33;                                                                       // Tag.MEMORY_MANAGEMENT_UNSAFE
    static pthread_mutex_t var_6;                                                       // Tag.BODY
    --var_55;                                                                           // Tag.RACE_COND_UNSAFE
    free(var_4);                                                                        // Tag.BODY
    pthread_mutex_unlock(&var_6);                                                       // Tag.BODY
    pthread_mutex_lock(&var_6);                                                         // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER