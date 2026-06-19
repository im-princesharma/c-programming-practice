/*
==================================================
File: simple_calculator.c
Topic: Mini Project
Purpose: Build a simple calculator
==================================================
*/

#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nCalculator Results\n");
    printf("------------------\n");

    printf("Addition       = %.2f\n", num1 + num2);
    printf("Subtraction    = %.2f\n", num1 - num2);
    printf("Multiplication = %.2f\n", num1 * num2);

    if(num2 != 0)
        printf("Division       = %.2f\n", num1 / num2);
    else
        printf("Division not possible\n");

    return 0;
}
