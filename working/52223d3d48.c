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
    struct pthread_cond_t var_97;                                        // Tag.BODY
    char var_17[75];                                                     // Tag.BODY
    int *var_5 = malloc(sizeof(int));                                    // Tag.BODY
    struct pthread_mutex_t var_1;                                        // Tag.BODY
    char *var_46;                                                        // Tag.BODY
    free(var_5);                                                         // Tag.BODY
    strncpy(var_17, var_46, sizeof(var_17));                             // Tag.STRCPY_SAFE
    pthread_mutex_unlock(&var_1);                                        // Tag.BODY
    pthread_cond_signal(&var_97);                                        // Tag.COND_SIGNAL_UNSAFE
    pthread_mutex_lock(&var_1);                                          // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER