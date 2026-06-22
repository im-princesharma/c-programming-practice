/*
==================================================
Title   : Array Sum and Average
Purpose : Calculate sum and average of elements.
Working : Array elements are added together and
          average is calculated using total sum.
==================================================
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i, sum = 0;
    float average;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
