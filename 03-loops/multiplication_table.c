/*
==================================================
File: multiplication_table.c
Topic: Multiplication Table
Purpose: Generate multiplication table
==================================================
*/

#include <stdio.h>

int main()
{
    int number;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nMultiplication Table of %d\n\n", number);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",
               number,
               i,
               number * i);
    }

    return 0;
}

/*
Sample Input:
5

Sample Output:

5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
*/
