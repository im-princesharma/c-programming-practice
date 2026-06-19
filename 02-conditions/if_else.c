/*
==================================================
File: if_else.c
Topic: If Else Statement
Purpose: Execute different blocks of code
         based on conditions
==================================================
*/

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nChecking eligibility...\n");

    if(age >= 18)
    {
        printf("\nResult: ELIGIBLE\n");
        printf("You can vote.\n");
    }
    else
    {
        printf("\nResult: NOT ELIGIBLE\n");
        printf("You cannot vote yet.\n");
        printf("Wait until you turn 18.\n");
    }

    printf("\nProgram completed successfully.\n");

    return 0;
}
