// Header file for input and output functions
#include <stdio.h>

// Main function
int main()
{
    // Variable declaration
    float radius, area;

    // Take radius input from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate area of circle
    area = 3.14 * radius * radius;

    // Display area
    printf("Area of Circle = %.2f\n", area);

    // Return 0 indicates successful execution
    return 0;
}
 
