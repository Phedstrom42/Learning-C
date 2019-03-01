/* Going through 'Lesson 2: If statements in C' from
www.cprogramming.com/tutorial/c/lesson2.html*/
#include <stdio.h>

int main() {

  /*      Relational operators
      >  greater than          5 > 4 is TRUE
      <  less than             4 < 5 is TRUE
      >= greater than or equal 4 >= 4 is TRUE
      <= less than or equal    3 <= 4 is TRUE
      == equal to              5 == 5 is TRUE
      != not equal to          5 != 4 is TRUE */

  if(5 < 10)
    printf("Five is less than ten, that's a big surpise\n\n");

  if(1)
  {
    /* between the braces is the body of the if statement */
    printf("Execute all statements inside the body\n\n");
  }

  int age; /* User's inputed age */

  printf("Please enter your age: "); /* asking user for input of their age */
  scanf("%d", &age);

  if(age < 100)
  {
    printf("You're pretty young!\n");
  }
  else if(age == 100)
  {
    printf("You're pretty old!\n");
  }
  else
  {
    printf("You're really old!\n");
  }

  return 0;
}
