/* Going through 'Lesson 4: Functions in C' from
www.cprogramming.com/tutorial/c/lesson4.html */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mult( int x, int y);

int main()
{
  /* seeding rand() with current time to get a random number */
  srand( time( NULL ) );

  /* using rand() function to find and print a random number */
  int randomNum = rand();
  printf( "Your random number is %d\n", randomNum );

  getchar(); /* pause */
  printf( "\n\n" ); /* spacing */

  int x;
  int y;

  printf( "Please input two numbers to be multiplied: " );
  scanf( "%d", &x );
  scanf( "%d", &y );
  printf("The product of your two numbers is %d\n", mult( x, y ) );
  getchar(); /* pause */

  return 0;
}

int mult( int x, int y )
{
  return x * y;
}
