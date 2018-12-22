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
    int var_66;                                                                         // Tag.BODY
    static pthread_mutex_t var_24;                                                      // Tag.BODY
    static int var_77 = 17;                                                             // Tag.BODY
    for(int var_73 = 12; var_73 < 82; var_73++){                                        // Tag.BODY
       var_66 = 63;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    pthread_mutex_lock(&var_24);                                                        // Tag.BODY
    int *var_70 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_70);                                                                       // Tag.BODY
    *var_70 = 38;                                                                       // Tag.MEMORY_MANAGEMENT_UNSAFE
    --var_77;                                                                           // Tag.RACE_COND_SAFE
    pthread_mutex_unlock(&var_24);                                                      // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER