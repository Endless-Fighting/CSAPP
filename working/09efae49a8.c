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
    struct pthread_cond_t var_66;                                        // Tag.BODY
    struct pthread_mutex_t var_22;                                       // Tag.BODY
    pthread_mutex_unlock(&var_22);                                       // Tag.BODY
    int var_9;                                                           // Tag.BODY
    pthread_mutex_lock(&var_22);                                         // Tag.BODY
    int var_93 = 19;                                                     // Tag.BODY
    while(var_93 < 77){                                                  // Tag.BODY
       var_9 = 74;                                                       // Tag.BODY
       var_93++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    int var_51;                                                          // Tag.BODY
    pthread_cond_signal(&var_66);                                        // Tag.COND_SIGNAL_UNSAFE
    for(int var_38 = 8; var_38 < 10; var_38++){                          // Tag.BODY
       var_51 = 5;                                                       // Tag.BODY
    }                                                                    // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER