/*
==================================================
File: prime_number.c
Topic: Prime Number
Purpose: Check whether a number is prime
==================================================

Concepts Covered:
1. for loop
2. Conditional statements
3. Divisibility testing
4. Flag variable
*/

#include <stdio.h>

int main()
{
    int number;
    int i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1)
    {
        isPrime = 0;
    }

    for(i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
    {
        printf("%d is a Prime Number.\n", number);
    }
    else
    {
        printf("%d is not a Prime Number.\n", number);
    }

    return 0;
}
