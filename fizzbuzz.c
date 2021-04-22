#include <stdio.h>
#include <string.h>

#include "fizzbuzz.h"

int fizzbuzz(int limit, ConfigEntry* config, string_t* result) {
  // NOTE: This is wrong
  result[0] = config[0].message;

  return 1;
}
