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
    char *var_92;                                                                       // Tag.BODY
    int var_72;                                                                         // Tag.BODY
    static int var_73 = 79;                                                             // Tag.BODY
    int var_16;                                                                         // Tag.BODY
    char var_81[75];                                                                    // Tag.BODY
    strcpy(var_81, var_92);                                                             // Tag.STRCPY_UNSAFE
    int var_49 = 26;                                                                    // Tag.BODY
    if(var_49 >= 52){                                                                   // Tag.BODY
       var_72 = 88;                                                                     // Tag.BODY
    }                                                                                   // Tag.BODY
    static pthread_mutex_t var_70;                                                      // Tag.BODY
    int var_25 = 5;                                                                     // Tag.BODY
    if(var_25 < 18){                                                                    // Tag.BODY
       var_16 = 4;                                                                      // Tag.BODY
    }                                                                                   // Tag.BODY
    var_73 = 13;                                                                        // Tag.RACE_COND_UNSAFE
    pthread_mutex_unlock(&var_70);                                                      // Tag.BODY
    pthread_mutex_lock(&var_70);                                                        // Tag.BODY
    return 0;                                                                           // Tag.BODY
}                                                                                       // Tag.OTHER