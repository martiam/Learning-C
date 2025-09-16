#include <stdio.h>

#define PLAYERS 5

struct stats {
  int points;
  int games;
};

struct stats players[5];

int main(void) {  
  struct stats player_stats;
  for (int player = 0; player < PLAYERS; ++player) {
    printf("Enter player %d's point total: ", player + 1);
    scanf("%d", &players[player].points);
    printf("Enter player %d's game total: ", player + 1);
    scanf("%d", &players[player].games);
  }

  for (int player = 0; player < PLAYERS; ++player) {
    float average = (float) (players[player].points) / (players[player].games);
    printf("Player %d's scoring average was %.2f ppg.\n", player + 1, average);
  }

  return 0;
}
