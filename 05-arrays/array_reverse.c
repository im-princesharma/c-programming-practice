/*
==================================================
Title   : Reverse Array
Purpose : Display elements in reverse order.
Working : Array is traversed from last index
          to first index.
==================================================
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed Array:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
