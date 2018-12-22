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
    static pthread_mutex_t var_41;                                       // Tag.BODY
    static int var_74 = 12;                                              // Tag.BODY
    pthread_mutex_unlock(&var_41);                                       // Tag.BODY
    ++var_74;                                                            // Tag.RACE_COND_UNSAFE
    pthread_mutex_lock(&var_41);                                         // Tag.BODY
    int *var_55;                                                         // Tag.BODY
    var_55 = malloc(sizeof(int));                                        // Tag.BODY
    free(var_55);                                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER