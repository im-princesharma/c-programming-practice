/*
==================================================
File: do_while_loop.c
Topic: Do While Loop
Purpose: Demonstrate guaranteed execution
==================================================
*/

#include <stdio.h>

int main()
{
    int number;

    do
    {
        printf("Enter a positive number (0 to exit): ");
        scanf("%d", &number);

        if(number > 0)
        {
            printf("You entered: %d\n\n", number);
        }

    } while(number != 0);

    printf("Program terminated.\n");

    return 0;
}

/*
Sample Input:
5
8
10
0

Sample Output:
You entered: 5
You entered: 8
You entered: 10
Program terminated.
*/
