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
    int *var_30 = malloc(sizeof(int));                                                  // Tag.BODY
    static pthread_mutex_t var_80;                                                      // Tag.BODY
    char *var_86;                                                                       // Tag.BODY
    int var_28;                                                                         // Tag.BODY
    char var_50[60];                                                                    // Tag.BODY
    int var_5 = 64;                                                                     // Tag.BODY
    while(var_5 < 97){                                                                  // Tag.BODY
       var_28 = 47;                                                                     // Tag.BODY
       var_5++;                                                                         // Tag.BODY
    }                                                                                   // Tag.BODY
    strncpy(var_50, var_86, sizeof(var_50));                                            // Tag.STRCPY_SAFE
    free(var_30);                                                                       // Tag.BODY
    static int var_61 = 58;                                                             // Tag.BODY
    pthread_mutex_unlock(&var_80);                                                      // Tag.BODY
    pthread_mutex_lock(&var_80);                                                        // Tag.BODY
    var_61 = 91;                                                                        // Tag.RACE_COND_UNSAFE
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER