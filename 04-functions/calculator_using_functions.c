/*   
==================================================          
Title   : Calculator Using Functions   
Purpose : Perform arithmetic operations using
           separate functions.    
Working : Individual functions handle addition,  
           subtraction, multiplication and
           division.   
==================================================
*/
 
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}
 
int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a = 20;
    int b = 10;

    printf("Addition       : %d\n", add(a, b));
    printf("Subtraction    : %d\n", subtract(a, b));
    printf("Multiplication : %d\n", multiply(a, b));
    printf("Division       : %.2f\n", divide(a, b));

    return 0;
}
