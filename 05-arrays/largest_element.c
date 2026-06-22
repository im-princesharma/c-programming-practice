/*
==================================================
Title   : Largest Element in Array
Purpose : Find the largest value in an array.
Working : Each element is compared with the
          current largest value.
==================================================
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i, largest;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest Element = %d\n", largest);

    return 0;
}
