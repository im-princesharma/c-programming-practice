/*
==================================================
Title   : Array Input and Output
Purpose : Store and display array elements.
Working : Elements are entered by the user,
          stored in an array and displayed.
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

    printf("\nArray Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
