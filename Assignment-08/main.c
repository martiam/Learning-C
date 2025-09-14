#include <stdio.h>

int main(void) {
  int input;
  printf("Enter a number between 1 and 500: ");
  scanf("%d", &input);
  if (input > 0 && input <= 100) {
    printf("Your number is between 1 and 100!\n");
  } else if (input > 100 && input <= 200) {
    printf("Your number is between 101 and 200!\n");
  } else if (input > 200 && input <= 300) {
    printf("Your number is between 201 and 300!\n");
  } else if (input > 300 && input <= 400) {
    printf("Your number is between 301 and 400!\n");
  } else if (input > 400 && input <= 500) {
    printf("Your number is between 401 and 500!\n");
  } else {
    printf("Your number was not in any of our ranges!\n");
  }
  return 0;
}
