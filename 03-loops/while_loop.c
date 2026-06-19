/*
==================================================
File: while_loop.c
Topic: While Loop
Purpose: Learn iteration using while loop
==================================================

Concepts Covered:
1. while loop
2. Initialization
3. Condition checking
4. Increment operation
*/

#include <stdio.h>

int main()
{
    int count = 1;

    printf("Printing numbers from 1 to 10:\n\n");

    while(count <= 10)
    {
        printf("%d ", count);
        count++;
    }

    printf("\n\n");

    printf("Printing even numbers from 2 to 20:\n\n");

    count = 2;

    while(count <= 20)
    {
        printf("%d ", count);
        count += 2;
    }

    printf("\n");

    return 0;
}

/*
Sample Output:

1 2 3 4 5 6 7 8 9 10

2 4 6 8 10 12 14 16 18 20
*/
