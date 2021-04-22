#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "fizzbuzz.h"
#include "test.h"

int test(UnitEntry* unitEntry) {

    string_t  result[unitEntry->limit];
    int size = fizzbuzz(unitEntry->limit, unitEntry->config, result);
    if ( size != unitEntry->lexpected) {

        fprintf(stderr, "Arrays `expected_result` and `result` are not the same length");

        return 1;

    }

    for(int i = 0; i < size; i++)

        if (strcmp((unitEntry->expected_result)[i], result[i]) != 0) {

            fprintf(stderr, "Arrays `expected_result` and `result` are different");

            return 2;

        }

    return 0;

}
