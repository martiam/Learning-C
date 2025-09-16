#include <stdio.h>

int main(void) {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int num_elems = sizeof(arr) / sizeof(int);
  printf("The array has %d elements.\n", num_elems);
  return 0;
}
