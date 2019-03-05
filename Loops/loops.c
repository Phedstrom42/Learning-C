/* Going through 'Loops' from
www.cprogramming.com/tutorial/c/lesson3.html */

#include <stdio.h>

int main()
{
  int x; /* sentinel variable */

  printf("For Loop\n");

  /* prints "0" through "9" with each number on a new line */
  for (x = 0; x < 10; x++)
  {
    printf("%d\n", x );
  }

  getchar(); /* pause */
  printf("\n\n"); /* spacing */
  x = 0; /* reset x for next loop */

  printf("While Loop\n");

  /* prints "0" through "9" with each number on a new line */
  while (x < 10)
  {
    printf("%d\n", x );
    x++; /* incriment sentinel variable */
  }

  getchar(); /* pause */
  printf("\n\n"); /* spacing */
  x = 0; /* reset x for next loop */

  printf("Do-While Loop\n");

  do
  {
    printf("This was printed once even though the condition is false.\n");
  } while (x != 0);

  getchar(); /* pause */
  printf("\n\n"); /* spacing */
  x = 0; /* reset x for next loop */

  /* prints "0" through "5" and then break out of the loop */
  while (x < 10)
  {
    printf("%d\n", x );

    if(x == 5)
      break;

    x++; /* incriment sentinel variable */
  }

  getchar(); /* pause */
  printf("\n\n"); /* spacing */
  x = 0; /* reset x for next loop */

  /* prints "0" through "9" but skips "5" */
  for (x = 0; x < 10; x++)
  {
    if(x == 5)
      continue;

    printf("%d\n", x );
  }

  return 0;
}
