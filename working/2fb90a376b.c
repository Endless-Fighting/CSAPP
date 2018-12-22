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
    int *var_80 = malloc(sizeof(int));                                   // Tag.BODY
    struct pthread_mutex_t var_45;                                       // Tag.BODY
    free(var_80);                                                        // Tag.BODY
    int *var_16 = malloc(sizeof(int));                                   // Tag.BODY
    struct pthread_cond_t var_77;                                        // Tag.BODY
    free(var_16);                                                        // Tag.BODY
    static int var_97 = 64;                                              // Tag.BODY
    int *var_75;                                                         // Tag.BODY
    var_75 = malloc(sizeof(int));                                        // Tag.BODY
    *var_75 = 22;                                                        // Tag.MEMORY_MANAGEMENT_SAFE
    static int var_49 = 0;                                               // Tag.BODY
    pthread_mutex_lock(&var_45);                                         // Tag.BODY
    free(var_75);                                                        // Tag.BODY
    var_97--;                                                            // Tag.BODY
    while(!var_49){                                                      // Tag.BODY
       pthread_cond_wait(&var_77, &var_45);                              // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_45);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER