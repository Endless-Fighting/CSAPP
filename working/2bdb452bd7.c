#include <stdlib.h>                                                      // Tag.OTHER
#include <string.h>                                                      // Tag.OTHER
struct pthread_mutex_t{ int i; };                                        // Tag.OTHER
struct pthread_cond_t{ int i; };                                         // Tag.OTHER
int pthread_mutex_lock(struct pthread_mutex_t*){}                        // Tag.OTHER
int pthread_mutex_unlock(struct pthread_mutex_t*){}                      // Tag.OTHER
void pthread_cond_wait(struct pthread_cond_t*, struct pthread_mutex_t*); // Tag.OTHER
void pthread_cond_signal(struct pthread_cond_t*);                        // Tag.OTHER
int main()                                                               // Tag.OTHER
{                                                                        // Tag.OTHER
    int *var_57 = malloc(sizeof(int));                                   // Tag.BODY
    char var_65[94];                                                     // Tag.BODY
    int var_82;                                                          // Tag.BODY
    free(var_57);                                                        // Tag.BODY
    int var_68 = 39;                                                     // Tag.BODY
    if(var_68 >= 83){                                                    // Tag.BODY
       var_82 = 28;                                                      // Tag.BODY
    }                                                                    // Tag.BODY
    char *var_96;                                                        // Tag.BODY
    strncpy(var_65, var_96, sizeof(var_65));                             // Tag.STRCPY_SAFE
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER