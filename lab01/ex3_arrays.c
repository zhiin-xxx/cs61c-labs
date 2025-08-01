#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Creates an integer with value 5
  // Note: int8_t is a numerical datatype that takes up 1 byte of memory
  int8_t x = 5;

  // TODO: create an int8_t array of size 4
  int8_t some_array[4];
  printf("address of the start of the array: %p\n", some_array);

  // TODO: compute the address of the element at index 2 (0-indexed)
  int8_t* ptr_to_idx_2 = &some_array[2];
  printf("address of index 2: %p\n", ptr_to_idx_2);

  // TODO: store the value 10 at index 2, using ptr_to_idx_2
  *ptr_to_idx_2 = 10;

  // TODO: print the value at index 2
  // Hint: this blank should be the same as the previous blank
  //       please don't hard code 10
  printf("value at index 2: %d\n", some_array[2]);

  return 0;
}
