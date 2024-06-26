#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"


// Driver code
int main()
{

  // store the random number
  int n;
  char you, computer, result;
  time_t t;


  /* Intializes random number generator */
   srand((unsigned) time(&t));

  // Make a random number less than 100:
  n = rand() % 100;

  // 100 is roughly divided among rock, paper, and scissors
  if (n < 33) {
    // r denotes rock
    computer = 'r';
  } else if (n > 33 && n < 66){
    // p denotes paper
    computer = 'p';
  } else {
    // s denotes scissor
    computer = 's';
  }
  printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER and s for SCISSORS\n\t\t\t\t\t\t\t\t");

  // Input from the user
  scanf("%c", &you);

  // Function call to play the game
  result = game(you, computer);

  if (result == -1) {
    printf("\n\n\t\t\tGame draw!\n");
  } else if (result == 1) {
    printf("\n\n\t\t\tWow! You have won the game!\n");
  } else {
    printf("\n\n\t\t\t\tOh! You have lost the game!\n");
  }

  printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", you, computer);

  return 0;
}
