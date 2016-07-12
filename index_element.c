#ifndef index
#define index

int index_element(int array[], int size, int element) {

  for (int i = 0; i < size; ++i) {
    if(element == array[i]) {
      return i;
    }
  }
  return -1;
}

#endif