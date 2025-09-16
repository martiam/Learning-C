#include <stdlib.h>
#include <stdio.h>

int main(void) {
  const int GAMES = 4;
  const int PLAYERS = 5;

  int scores[GAMES][PLAYERS];
  int totals[PLAYERS];

  for (int game_count = 0; game_count < GAMES; ++game_count) {
    printf("Game #%d\n", game_count + 1);
    for (int player_count = 0; player_count < PLAYERS; ++player_count) {
      printf("Enter scoring total for Player #%d: ", player_count + 1);
      scanf("%d", &scores[game_count][player_count]);
    }
  }

  for (int player_count = 0; player_count < PLAYERS; ++player_count) {
    totals[player_count] = 0;
    for (int game_count = 0; game_count < GAMES; ++game_count) {
      totals[player_count] += scores[game_count][player_count];
    }
    printf("Player #%d has a total of %f points.\n", player_count + 1, (float) totals[player_count]);
  }

  int hs_player = 0;
  int high_score = 0;
  for (int i = 0; i < PLAYERS; ++i) {
    if (totals[i] > high_score) {
      hs_player = i;
      high_score = totals[i];
    }
  }

  printf("Player #%d had the highest scoring average of %.2f points per game.\n", hs_player + 1, (float) high_score / GAMES);
  return 0;
}
