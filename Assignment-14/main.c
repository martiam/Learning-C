#include <stdio.h>

int main(void) {
  int var = 69420;
  int *ptr = &var;
  printf("The value of our pointer is: %p\n", ptr);
  return 0;
}
