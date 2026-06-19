/*
==================================================
File: else_if_ladder.c
Topic: Else If Ladder
Purpose: Learn multi-condition decision making
==================================================

Concepts Covered:
1. else if ladder
2. Multiple conditions
3. User input
4. Grade calculation
*/

#include <stdio.h>

int main()
{
    int marks;

    printf("=====================================\n");
    printf("         GRADE CALCULATOR\n");
    printf("=====================================\n");

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    printf("\nResult\n");
    printf("-------------------------------------\n");

    if(marks >= 90)
    {
        printf("Grade : A+\n");
        printf("Excellent Performance\n");
    }
    else if(marks >= 80)
    {
        printf("Grade : A\n");
        printf("Very Good Performance\n");
    }
    else if(marks >= 70)
    {
        printf("Grade : B\n");
        printf("Good Performance\n");
    }
    else if(marks >= 60)
    {
        printf("Grade : C\n");
        printf("Average Performance\n");
    }
    else if(marks >= 40)
    {
        printf("Grade : D\n");
        printf("Pass\n");
    }
    else
    {
        printf("Grade : F\n");
        printf("Fail\n");
    }

    printf("\nProgram Completed Successfully.\n");

    return 0;
}
