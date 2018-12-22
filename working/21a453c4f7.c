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
    int *var_53 = malloc(sizeof(int));                                                  // Tag.BODY
    free(var_53);                                                                       // Tag.BODY
    char *var_50;                                                                       // Tag.BODY
    int var_82;                                                                         // Tag.BODY
    int var_66 = 16;                                                                    // Tag.BODY
    while(var_66 < 59){                                                                 // Tag.BODY
       var_82 = 5;                                                                      // Tag.BODY
       var_66++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    char var_32[17];                                                                    // Tag.BODY
    strncpy(var_32, var_50, sizeof(var_32));                                            // Tag.STRCPY_SAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER