/*
==================================================
File: palindrome_number.c
Topic: Palindrome Number
Purpose: Check whether a number is palindrome
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

    if(originalNumber == reversed)
    {
        printf("Palindrome Number\n");
    }
    else
    {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}
