#ifndef index
#define index

int index_element(int array[], int size) {
  int result;

  printf("Введите значение элемента массива\n");
  scanf("%d", &result);

  for (int i = 0; i < size; ++i) {
    if(result == array[i]) {
      result = i;
    }
  }
return result;
}

#endif