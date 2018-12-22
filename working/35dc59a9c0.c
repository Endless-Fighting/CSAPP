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
    int *var_83 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_83);                                                                       // Tag.BODY
    char var_39[88];                                                                    // Tag.BODY
    char *var_32;                                                                       // Tag.BODY
    struct pthread_cond_t var_63;                                                       // Tag.BODY
    struct pthread_mutex_t var_28;                                                      // Tag.BODY
    int var_47;                                                                         // Tag.BODY
    pthread_mutex_unlock(&var_28);                                                      // Tag.BODY
    int var_72 = 33;                                                                    // Tag.BODY
    if(var_72 == 44){                                                                   // Tag.BODY
       var_47 = 79;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    pthread_cond_signal(&var_63);                                                       // Tag.COND_SIGNAL_UNSAFE
    strncpy(var_39, var_32, sizeof(var_39));                                            // Tag.STRCPY_SAFE
    pthread_mutex_lock(&var_28);                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER