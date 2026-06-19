/*
==================================================
File: largest_of_three.c
Topic: Largest Number
Purpose: Find largest among three numbers
==================================================
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("\nLargest Number = %d\n", a);
    else if(b >= a && b >= c)
        printf("\nLargest Number = %d\n", b);
    else
        printf("\nLargest Number = %d\n", c);

    return 0;
}
