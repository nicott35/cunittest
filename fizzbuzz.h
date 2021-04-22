#include <stdlib.h>
#include <stdio.h>

#ifndef FIZZ_BUZZ_H

#define FIZZ_BUZZ_H

typedef char* string_t;

typedef struct ConfigEntry {
    int modulo;
    string_t message;

  } ConfigEntry;

int fizzbuzz(int , ConfigEntry*, string_t*);

#endif
