/*
==================================================
File: positive_negative.c
Topic: Number Classification
Purpose: Check positive, negative or zero
==================================================
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter any integer: ");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("\nPositive Number\n");
    }
    else if(number < 0)
    {
        printf("\nNegative Number\n");
    }
    else
    {
        printf("\nNumber is Zero\n");
    }

    return 0;
}
