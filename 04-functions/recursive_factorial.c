/*
==================================================
Title   : Recursive Factorial
Purpose : Calculate factorial using
          recursion.
Working : The function repeatedly calls
          itself until the base condition
          is reached.
==================================================
*/

#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int num = 5;

    printf("Factorial of %d = %d\n",
           num,
           factorial(num));

    return 0;
}
