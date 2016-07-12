#include <stdio.h>
#include "digital_array.c"
#include "index_element.c"

const int N = 10;

int main() {
  int array[N];
  int element;
  input_digital_array(array, N);
  printf("Введите значение элемента массива\n");
  scanf("%d", &element);
  printf("Index: %d\n", index_element(array, N, element));

  return 0;
}