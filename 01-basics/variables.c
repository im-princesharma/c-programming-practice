/*
==================================================
File: variables.c
Topic: Variables
Purpose: Learn declaration, initialization,
         and updating variables
==================================================
*/

#include <stdio.h>

int main()
{
    int age = 19;
    float cgpa = 8.75;
    char grade = 'A';

    printf("Initial Values\n");
    printf("-----------------\n");
    printf("Age   = %d\n", age);
    printf("CGPA  = %.2f\n", cgpa);
    printf("Grade = %c\n", grade);

    // Updating values
    age = 20;
    cgpa = 9.10;

    printf("\nUpdated Values\n");
    printf("-----------------\n");
    printf("Age   = %d\n", age);
    printf("CGPA  = %.2f\n", cgpa);

    return 0;
}
