/*
==================================================
File: fibonacci_series.c
Topic: Fibonacci Series
Purpose: Generate Fibonacci sequence
==================================================

Concepts Covered:
1. for loop
2. Variables swapping
3. Number series generation
*/

#include <stdio.h>

int main()
{
    int terms;
    int first = 0;
    int second = 1;
    int next;
    int i;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    if(terms <= 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci Series:\n");

    for(i = 1; i <= terms; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
