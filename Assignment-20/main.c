#include <stdio.h>

struct myStruct {
  int myInt;
  char myChar;
  float myFloat;
};

int main(void) {
  struct myStruct ms = {1, 'a', 6.9};
  printf("This is the int: %d, this is the char: %c, this is the float: %f\n", ms.myInt, ms.myChar, ms.myFloat);
  return 0;
}
