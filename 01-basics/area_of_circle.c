/*
==================================================
File: area_of_circle.c
Topic: Mathematical Formula
Purpose: Calculate area and circumference
==================================================
*/

#include <stdio.h>

int main()
{
    float radius;
    const float PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("\nCircle Information\n");
    printf("------------------\n");
    printf("Radius        = %.2f\n", radius);
    printf("Area          = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
