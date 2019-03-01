/* Going through 'Intro to C' from
www.cprogramming.com/tutorial/c/lesson1.html */
#include <stdio.h>

int main() {

  printf("I am alive! Beware.\n");
  getchar();

  int x;
  printf("Declare x first");
  x = 1;

  int thisIsANumber;

  printf("Please enter a number: ");
  scanf("%d", &thisIsANumber);
  printf("You entered %d\n", thisIsANumber);
  getchar();

  a = 4 * 6; /* (Note use of comments and of semicolon) a is 24 */
  a = a + 5; /* a equals the original value of a with five added to it */
  a == 5     /* Does NOT assign five to a. Rather, it checks to see if a equals 5.*/

  return 0;
}
