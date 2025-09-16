#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

int main(void) {
  double *scores = malloc( sizeof( double ) * INITIAL_CAPACITY );

  if (scores == NULL) {
    fprintf(stderr, "Failed to allocate scores array.");
    return 1;
  }

  int current_capacity = INITIAL_CAPACITY;
  char answer[] = "Y";
  int numScores;

  for (numScores = 0; strcmp(answer, "Y") == 0; ++numScores) {
    if (numScores == current_capacity) {
      current_capacity *= 2;
      scores = realloc(scores, current_capacity * sizeof( double ) );
      if (scores == NULL) {
        fprintf(stderr, "Failed to allocate scores array.");
        return 1;
      }
    }

    printf("Enter a test score: ");
    scanf("%lf", &scores[numScores]);

    printf("Would you like to continue? Y/N ");
    scanf("%s", &answer);
  }

  double sumScores = 0;
  for (int i = 0; i < numScores; ++i) {
    sumScores += scores[i];
  }

  printf("%.2f is the average.\n", sumScores / numScores);

  free(scores);

  return 0;
}
