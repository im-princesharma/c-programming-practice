/*
==================================================
File: switch_case.c
Topic: Switch Case
Purpose: Create a menu driven calculator
==================================================
*/

#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;

    printf("=====================================\n");
    printf("       MENU DRIVEN CALCULATOR\n");
    printf("=====================================\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4)
    {
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);
    }

    switch(choice)
    {
        case 1:
            printf("\nAddition = %.2f\n", num1 + num2);
            break;

        case 2:
            printf("\nSubtraction = %.2f\n", num1 - num2);
            break;

        case 3:
            printf("\nMultiplication = %.2f\n", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("\nDivision = %.2f\n", num1 / num2);
            else
                printf("\nDivision by zero is not allowed.\n");
            break;

        case 5:
            printf("\nExiting Program...\n");
            break;

        default:
            printf("\nInvalid Choice.\n");
    }

    return 0;
}
