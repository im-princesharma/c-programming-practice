// Header file for input and output functions
#include <stdio.h>

// Main function
int main()
{
    int age;

    // Ask user to enter age
    printf("Enter your age: ");

    // Take input from user
    scanf("%d", &age);

    // Display the entered age
    printf("Your age is %d\n", age);

    // Program executed successfully
    return 0;
}