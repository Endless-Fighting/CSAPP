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
    int var_28;                                                                         // Tag.BODY
    for(int var_42 = 70; var_42 < 81; var_42++){                                        // Tag.BODY
       var_28 = 29;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    static int var_35 = 90;                                                             // Tag.BODY
    static pthread_mutex_t var_0;                                                       // Tag.BODY
    pthread_mutex_lock(&var_0);                                                         // Tag.BODY
    var_35--;                                                                           // Tag.RACE_COND_SAFE
    pthread_mutex_unlock(&var_0);                                                       // Tag.BODY
    int *var_17 = malloc(sizeof(int));                                                  // Tag.BODY
    int *var_62;                                                                        // Tag.BODY
    var_62 = malloc(sizeof(int));                                                       // Tag.BODY
    *var_17 = 15;                                                                       // Tag.MEMORY_MANAGEMENT_SAFE
    free(var_62);                                                                       // Tag.BODY
    free(var_17);                                                                       // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER