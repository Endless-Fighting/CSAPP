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
    int var_94;                                                                         // Tag.BODY
    char var_89[10];                                                                    // Tag.BODY
    char *var_80;                                                                       // Tag.BODY
    int var_93 = 33;                                                                    // Tag.BODY
    while(var_93 < 66){                                                                 // Tag.BODY
       var_94 = 19;                                                                     // Tag.BODY
       var_93++;                                                                        // Tag.BODY
    }                                                                                   // Tag.BODY
    strcpy(var_89, var_80);                                                             // Tag.STRCPY_UNSAFE
    int var_2;                                                                          // Tag.BODY
    int var_63 = 25;                                                                    // Tag.BODY
    if(var_63 == 33){                                                                   // Tag.BODY
       var_2 = 89;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER