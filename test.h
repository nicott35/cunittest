#include "fizzbuzz.h"

#ifndef TEST_H

#define TEST_H

typedef struct UnitEntry {

    int limit;
    ConfigEntry* config;
    string_t expected_result;
    size_t lexpected;

} UnitEntry;

int test(UnitEntry* unitEntry);

#endif
