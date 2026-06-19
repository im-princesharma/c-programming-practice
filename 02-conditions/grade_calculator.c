/*
==================================================
File: grade_calculator.c
Topic: Grade Calculator
Purpose: Calculate grade and result status
==================================================
*/

#include <stdio.h>

int main()
{
    int marks;

    printf("=====================================\n");
    printf("         STUDENT REPORT\n");
    printf("=====================================\n");

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("\nMarks Obtained : %d\n", marks);

    if(marks >= 90)
        printf("Grade : A+\n");
    else if(marks >= 80)
        printf("Grade : A\n");
    else if(marks >= 70)
        printf("Grade : B\n");
    else if(marks >= 60)
        printf("Grade : C\n");
    else if(marks >= 40)
        printf("Grade : D\n");
    else
        printf("Grade : F\n");

    if(marks >= 40)
        printf("Result : PASS\n");
    else
        printf("Result : FAIL\n");

    return 0;
}
