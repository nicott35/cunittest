#include <stdlib.h>
#include <stdio.h>

#include "fizzbuzz.h"
#include "test.h"

int main(int argc, char *argv[]) {

//  printf("limit %d\n", limit);
//  printf("config (%d, %s)\n", config[0].modulo, config[0].message);
//  printf("config (%d, %s)\n", config[1].modulo, config[1].message);

//  int size = fizzbuzz(limit, config, result);

//  for (int i = 0; i < size; i++)
//    printf("%s\n", result[i]);


  UnitEntry unitEntry = { 15,

                          {
                             { 3, "Fizz" },
                             { 5, "Buzz" },

                          },

                          {"fizz", "buzz", "fizz", "fizz", "buzz", "fizz" , "fizzbuzz"},

                          7

                        };

  int r = test(&unitEntry);

  printf("result of unit test: %d\n", r);

  return 0;
}
