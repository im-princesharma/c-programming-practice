// Header file for input and output functions
#include <stdio.h>

// Main function
int main()
{
    // Variable declaration
    int num1, num2;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations
    printf("Addition = %d\n", num1 + num2);
    printf("Subtraction = %d\n", num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);
    printf("Division = %d\n", num1 / num2);

    // Return 0 indicates successful execution
    return 0;
}

