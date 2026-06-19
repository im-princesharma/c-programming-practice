/*
==================================================
File: reverse_number.c
Topic: Reverse Number
Purpose: Reverse digits of a number
==================================================
*/

#include <stdio.h>

int main()
{
    int number;
    int reversed = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number;

    while(number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    printf("Original Number = %d\n", originalNumber);
    printf("Reversed Number = %d\n", reversed);

    return 0;
}
+