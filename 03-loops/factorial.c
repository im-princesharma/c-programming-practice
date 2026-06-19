/*
==================================================
File: factorial.c
Topic: Factorial of a Number
Purpose: Calculate factorial using for loop
==================================================

Concepts Covered:
1. for loop
2. Multiplication accumulation
3. User input validation
4. Mathematical calculations
*/

#include <stdio.h>

int main()
{
    int number, i;
    long long factorial = 1;

    // Take input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate input
    if(number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Calculate factorial
    for(i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", number, factorial);

    return 0;
}

/*
Sample Input:
5

Sample Output:
Factorial of 5 = 120
*/
