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
    struct pthread_mutex_t var_3;                                        // Tag.BODY
    int var_35;                                                          // Tag.BODY
    int var_53 = 8;                                                      // Tag.BODY
    while(var_53 < 50){                                                  // Tag.BODY
       var_35 = 60;                                                      // Tag.BODY
       var_53++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    static int var_42 = 31;                                              // Tag.BODY
    char var_13[59];                                                     // Tag.BODY
    char *var_48;                                                        // Tag.BODY
    struct pthread_cond_t var_71;                                        // Tag.BODY
    static int var_82 = 0;                                               // Tag.BODY
    int *var_5 = malloc(sizeof(int));                                    // Tag.BODY
    pthread_mutex_lock(&var_3);                                          // Tag.BODY
    --var_42;                                                            // Tag.BODY
    strncpy(var_13, var_48, sizeof(var_13));                             // Tag.STRCPY_SAFE
    free(var_5);                                                         // Tag.BODY
    while(!var_82){                                                      // Tag.BODY
       pthread_cond_wait(&var_71, &var_3);                               // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_3);                                        // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER