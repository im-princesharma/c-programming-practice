/*
==================================================
File: type_casting.c
Topic: Type Casting
Purpose: Convert one data type into another
==================================================
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    printf("Without Type Casting\n");
    printf("--------------------\n");
    printf("10 / 3 = %d\n", a / b);

    printf("\nWith Type Casting\n");
    printf("-----------------\n");

    float result = (float)a / b;
    printf("10 / 3 = %.2f\n", result);

    char grade = 'A';

    printf("\nCharacter to Integer\n");
    printf("--------------------\n");
    printf("Character = %c\n", grade);
    printf("ASCII Value = %d\n", grade);

    return 0;
}
