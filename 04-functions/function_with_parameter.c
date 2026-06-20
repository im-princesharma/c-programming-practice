/*
==================================================
Title   : Function With Parameters
Purpose : Demonstrate passing arguments
          to a function.
Working : Student details are passed
          through parameters and displayed.

==================================================
*/

#include <stdio.h>

void displayStudent(char name[], int age)
{
    printf("\nStudent Details\n");
    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
}

int main()
{
    displayStudent("Prince", 19);
    displayStudent("Rahul", 20);

    return 0;
}
