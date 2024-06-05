

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
