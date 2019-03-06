/* Going through "Pointers in C" from
https://www.cprogramming.com/tutorial/c/lesson6.html */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  int *p;

  p = &x;

  printf("Please enter an integer: ");
  scanf("%d", &x);

  printf("The value of x is %d\n", *p);
  printf("The memory address is %p\n\n", p);

  /* intializing a pointer from free memory */
  int *ptr = malloc(sizeof(*ptr));

  printf("The size of ptr is %d\n", *ptr);
  printf("he location is %p\n", ptr);

  free(ptr);
  ptr = 0;

}
