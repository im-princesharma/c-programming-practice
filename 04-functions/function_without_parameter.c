/*
==================================================
Title   : Function Without Parameters
Purpose : Demonstrate a user-defined function
          without arguments.
Working : displayMessage() prints predefined
          messages and is called from main().
==================================================
*/

#include <stdio.h>
 
void displayMessage()
{
    printf("Welcome to C Programming\n");
    printf("Functions help organize code\n");
    printf("Learning functions is important\n");
}

int main()
{
    printf("Program Started\n\n");

    displayMessage();

    printf("\nProgram Ended\n");

    return 0;
}
