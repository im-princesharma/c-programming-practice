/*
==================================================
Title   : Bubble Sort
Purpose : Sort array elements in ascending order.
Working : Adjacent elements are repeatedly
          compared and swapped.
==================================================
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i, j, temp;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
