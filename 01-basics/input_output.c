/*
==================================================
File: input_output.c
Topic: Input and Output
Purpose: Learn scanf() and printf()
==================================================
*/

#include <stdio.h>

int main()
{
    int age;
    float percentage;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Information -----\n");
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}

/*
Sample Input:
19
89.5
A

Sample Output:
Age        : 19
Percentage : 89.50
Grade      : A
*/
