/* 
==================================================            
File: constants.c    
Topic: Constants  
Purpose: Learn constant values in C   
==================================================  
*/ 
 
#include <stdio.h>

int main()
{ 
    const float PI = 3.14159;
    const int DAYS_IN_WEEK = 7;

    printf("Constants Example\n");
    printf("-----------------\n");

    printf("Value of PI = %.5f\n", PI);
    printf("Days in Week = %d\n", DAYS_IN_WEEK);

    float radius = 5;
    float area = PI * radius * radius;

    printf("\nRadius = %.2f\n", radius);
    printf("Area of Circle = %.2f\n", area);

    return 0;
}
