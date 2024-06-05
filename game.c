#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer)
{
  // DRAW CASE
  // If user and computer choose same thing
  if (you == computer) {
    return -1;
  }

  // WINNING CASES

  // PAPER covers ROCK (You win!)
  if (you == 'p' && computer == 'r') {
    return 1;
  }

  // ROCK breaks SCISSORS (You win!)
  if (you == 'r' && computer == 's') {
    return 1;
  }

  // SCISSORS cut PAPER (You win!)
  if (you == 's' && computer == 'p') {
    return 1;
  }

  // LOSING CASES

  // PAPER covers ROCK (You lose!)
  if (you == 'r' && computer == 'p') {
    return 0;
  }

  // ROCK breaks SCISSORS (You lose!)
  if (you == 's' && computer == 'r') {
    return 0;
  }

  // SCISSORS cuts PAPER (You win!)
  if (you == 'p' && computer == 's') {
    return 0;
  }

  return 0;
}

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

  // Using simple probability 100 is
  // roughly divided among stone,
  // paper, and scissor
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
