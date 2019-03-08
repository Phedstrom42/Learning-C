/* Going through "Pointers in C" from
www.cprogramming.com/tutorial/c/lesson7.html */

#include <stdio.h>
#include <string.h>

/* Defining a struct for the first example */
struct database
{
  int idNumber;
  int age;
  float salary;
};

/* Defining a struct for the second example */
struct books
{
  char title[50];
  char author[50];
  int idNumber;
};

int main()
{

  /* Intializing a struct */
  struct database employee1;

  /* Assigning variables to the first struct */
  employee1.age = 30;
  employee1.idNumber = 0123;
  employee1.salary = 45000.00;

  /* Printing variables from the first struct */
  printf("Id Number: %d\n"
         "Age: %d\n"
         "Salary: %.2f\n",
         employee1.idNumber,
         employee1.age,
         employee1.salary);

    printf("\n\n"); /* spacing */

  /* Intializing a struct and a pointer to the struct */
  struct books book1;
  struct books *book1ptr = &book1;

  /* Adding values to the second struct variables using a pointer */
  strcpy(book1ptr->title, "Harry Potter");
  strcpy(book1ptr->author, "JK Rowling");
  book1ptr->idNumber = 1;

  /* Printing the variables from the second struct using a pointer */
  printf("Title: %s\n"
         "Author: %s\n"
         "idNumber: %d\n",
         book1ptr->title,
         book1ptr->author,
         book1ptr->idNumber);

  return 0;
}
