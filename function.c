#include <stdio.h>
#include "digital_array.c"
#include "index_element.c"

const int N = 10;

int main() {
  int array[N];

  input_digital_array(array, N);
  printf("Index: %d\n", index_element(array, N));

  return 0;
}