/*
==================================================
File: for_loop.c
Topic: For Loop
Purpose: Learn iteration patterns
==================================================
*/

#include <stdio.h>

int main()
{
    int i;

    printf("Numbers from 1 to 10:\n\n");

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    printf("Even Numbers from 1 to 20:\n\n");

    for(i = 2; i <= 20; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    printf("Odd Numbers from 1 to 20:\n\n");

    for(i = 1; i <= 20; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
