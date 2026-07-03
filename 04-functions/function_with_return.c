/*
==================================================  
Title   : Function With Return Value 
Purpose : Demonstrate returning values  
          from a function.   
Working : Two numbers are added and 
          the result is returned to main().
==================================================
*/
 
#include <stdio.h>

int addNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    result = addNumbers(25, 15);

    printf("Sum = %d\n", result);

    return 0;
}
