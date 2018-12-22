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
    int var_31;                                                          // Tag.BODY
    static int var_52 = 0;                                               // Tag.BODY
    struct pthread_cond_t var_47;                                        // Tag.BODY
    static int var_94 = 55;                                              // Tag.BODY
    struct pthread_mutex_t var_67;                                       // Tag.BODY
    pthread_mutex_lock(&var_67);                                         // Tag.BODY
    ++var_94;                                                            // Tag.BODY
    for(int var_29 = 35; var_29 < 80; var_29++){                         // Tag.BODY
       var_31 = 27;                                                      // Tag.BODY
    }                                                                    // Tag.BODY
    while(!var_52){                                                      // Tag.BODY
       pthread_cond_wait(&var_47, &var_67);                              // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_67);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER