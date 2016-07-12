#ifndef digital_array
#define digital_array

void input_digital_array(int array[], int size) {

  printf("Введите массив\n");

  for (int i = 0; i < size; ++i) {
    scanf("%d", &array[i]);
  }
}

void output_digital_array(int array[], int size) {

  for (int i = 0; i < size; ++i) {
    printf("%d, ", array[i]);
  }
}
#endif