#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));  
  int count;
  printf("How many times would you like to flip the coin? ");
  scanf("%d", &count);

  int flip;
  int heads = 0;
  int tails = 0;
  for (int i = 0; i < count; ++i) {
    flip = rand() % 2;
    switch (flip) {
      case 0:
        heads++;
        break;
      default:
        tails++;
        break;
    }
  }
  printf("After flipping the coin %d times, the results were\n", count);
  printf("%d heads\n", heads);
  printf("%d tails\n", tails);
  return 0;
}
