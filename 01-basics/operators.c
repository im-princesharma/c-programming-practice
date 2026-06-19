/*
==================================================
File: operators.c
Topic: Operators
Purpose: Learn different operators in C
==================================================
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;

    printf("Arithmetic Operators\n");
    printf("--------------------\n");
    printf("Addition       = %d\n", a + b);
    printf("Subtraction    = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division       = %d\n", a / b);
    printf("Modulus        = %d\n", a % b);

    printf("\nRelational Operators\n");
    printf("--------------------\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a == b = %d\n", a == b);

    printf("\nLogical Operators\n");
    printf("-----------------\n");
    printf("(a>b && b>0) = %d\n", (a>b && b>0));
    printf("(a<b || b>0) = %d\n", (a<b || b>0));

    printf("\nIncrement / Decrement\n");
    printf("---------------------\n");
    printf("a = %d\n", a);
    printf("a++ = %d\n", a++);
    printf("After Increment = %d\n", a);

    return 0;
}
