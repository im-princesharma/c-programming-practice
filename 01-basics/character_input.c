// Header file for input and output functions
#include <stdio.h>

// Main function
int main()
{
    // Variable declaration
    char grade;

    // Ask user to enter grade
    printf("Enter your grade: ");

    // Take character input from user
    scanf("%c", &grade);

    // Display entered grade
    printf("Your grade is %c\n", grade);

    // Return 0 indicates successful execution
    return 0;
}

