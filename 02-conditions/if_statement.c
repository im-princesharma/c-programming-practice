/*
==================================================
File: if_statement.c
Topic: If Statement in C
Purpose: Learn how to execute code when
         a condition becomes true
==================================================

Concepts Covered:
1. if statement
2. Relational operators
3. User input
4. Decision making
5. Conditional execution
*/

#include <stdio.h>

int main()
{
    int age;

    // Take age from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nYou entered age: %d\n", age);

    // Condition checking
    if(age >= 18)
    {
        printf("\nCongratulations!\n");
        printf("You are eligible to vote.\n");
    }

    printf("\nProgram execution completed.\n");

    return 0;
}

/*
Sample Input:
20

Sample Output:

You entered age: 20

Congratulations!
You are eligible to vote.

Program execution completed.
*/
