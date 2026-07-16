/*
==================================================  
File: hello_world.c  
Topic: Hello World Program 
Purpose: Learn basic output functions in C  
==================================================

Concepts Covered: 
1. Structure of a C Program  
2. Header Files
3. main() Function    
4. printf() Function
5. Escape Sequences
*/

#include <stdio.h>

int main() 
{
    // Simple message
    printf("Hello, World!\n");

    // Another message
    printf("Welcome to C Programming.\n");

    // Printing multiple lines
    printf("\nLearning C is fun!\n");
    printf("Practice daily to improve.\n");

    // Using escape sequences
    printf("\nName:\tPrince Sharma\n");
    printf("Course:\tBCA\n");
    printf("Year:\t1st Year\n");

    printf("\nThis program demonstrates basic output in C.\n");

    return 0;
}

/*
Expected Output:

Hello, World!
Welcome to C Programming.

Learning C is fun!
Practice daily to improve.

Name:   Prince Sharma
Course: BCA
Year:   1st Year

This program demonstrates basic output in C.
*/
