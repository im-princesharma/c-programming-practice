/*
==================================================
File: data_types.c
Topic: Data Types in C
Purpose: Learn different data types
==================================================
*/

#include <stdio.h>

int main()
{
    int age = 19;
    float percentage = 89.75;
    double pi = 3.14159265359;
    char grade = 'A';

    printf("Different Data Types in C\n");
    printf("-------------------------\n");

    printf("Integer Value    : %d\n", age);
    printf("Float Value      : %.2f\n", percentage);
    printf("Double Value     : %.11lf\n", pi);
    printf("Character Value  : %c\n", grade);

    printf("\nMemory Usage\n");
    printf("int    = %lu bytes\n", sizeof(age));
    printf("float  = %lu bytes\n", sizeof(percentage));
    printf("double = %lu bytes\n", sizeof(pi));
    printf("char   = %lu bytes\n", sizeof(grade));

    return 0;
}
