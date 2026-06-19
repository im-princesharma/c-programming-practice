/*
==================================================
File: sum_of_n_numbers.c
Topic: Sum of Natural Numbers
Purpose: Calculate sum using loops
==================================================
*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("\nSum of first %d natural numbers = %d\n",
           n,
           sum);

    return 0;
}

/*
Sample Input:
5

Sample Output:
Sum of first 5 natural numbers = 15
*/
