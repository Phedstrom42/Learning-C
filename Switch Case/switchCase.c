/* Going through "Switch Case in C" from
www.cprogramming.com/tutorial/c/lesson5.html */

#include <stdio.h>


void playGame()
{
  printf("playGame() called\n");
}

void loadGame()
{
  printf("loadGame() called\n");
}

void playMultiplayer()
{
  printf("playMultiplayer() game called\n");
}

int main()
{
  int userInput;

  /* Menu */
  printf("1. Play Game\n");
  printf("2. Load Game\n");
  printf("3. Play Multiplayer\n");
  printf("4. Exit\n");

  /* User Selection */
  printf("Selection: ");
  scanf("%d", &userInput);

  switch (userInput)
  {
    case 1:
      playGame();
      break;
    case 2:
      loadGame();
      break;
    case 3:
      playMultiplayer();
      break;
    case 4:
      printf("Thanks for playing!\n");
      break;
    default:
      printf("Bad input, quiting!\n");
      break;
  }

  return 0;
}
