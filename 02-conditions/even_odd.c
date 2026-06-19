/*
==================================================
File: even_odd.c
Topic: Even and Odd Numbers
Purpose: Determine whether a number is
         even or odd
==================================================
*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter any integer: ");
    scanf("%d", &number);

    printf("\nYou entered: %d\n", number);

    if(number % 2 == 0)
    {
        printf("\nResult : EVEN NUMBER\n");
        printf("%d is divisible by 2.\n", number);
    }
    else
    {
        printf("\nResult : ODD NUMBER\n");
        printf("%d is not divisible by 2.\n", number);
    }

    printf("\nProgram Completed Successfully.\n");

    return 0;
}
