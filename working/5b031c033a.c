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
    struct pthread_cond_t var_48;                                        // Tag.BODY
    char var_26[77];                                                     // Tag.BODY
    int var_17;                                                          // Tag.BODY
    struct pthread_mutex_t var_34;                                       // Tag.BODY
    char *var_93;                                                        // Tag.BODY
    static int var_87 = 70;                                              // Tag.BODY
    int var_44 = 2;                                                      // Tag.BODY
    while(var_44 < 33){                                                  // Tag.BODY
       var_17 = 17;                                                      // Tag.BODY
       var_44++;                                                         // Tag.BODY
    }                                                                    // Tag.BODY
    strncpy(var_26, var_93, sizeof(var_26));                             // Tag.STRCPY_SAFE
    static int var_52 = 0;                                               // Tag.BODY
    pthread_mutex_lock(&var_34);                                         // Tag.BODY
    var_87++;                                                            // Tag.BODY
    while(!var_52){                                                      // Tag.BODY
       pthread_cond_wait(&var_48, &var_34);                              // Tag.COND_WAIT_SAFE
    }                                                                    // Tag.BODY
    pthread_mutex_unlock(&var_34);                                       // Tag.BODY
    return 0;                                                            // Tag.BODY
}                                                                        // Tag.OTHER