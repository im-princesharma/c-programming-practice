/*  
==================================================  
Title   : Recursive Fibonacci Series      
Purpose : Generate Fibonacci numbers     
          using recursion.    
Working : Each term is calculated from       
          the sum of the previous two terms.  
==================================================   
*/

#include <stdio.h>
 
int fibonacci(int n)
{
    if(n <= 1)
        return n;

    return fibonacci(n - 1) +
           fibonacci(n - 2);
}

int main()
{
    int i;

    printf("Fibonacci Series:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
