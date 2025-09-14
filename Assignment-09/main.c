#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Invalid number of arguments.\n");
    printf("Usage: ./main FirstName LastName\n");
    return 1;
  }
  printf("Welcome, %s %s.\n", argv[1], argv[2]);
  return 0;
}
