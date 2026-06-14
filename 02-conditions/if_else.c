// Program: Simple if-else example in C
// Purpose: Check whether a number is positive, negative, or zero

#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Condition 1: Check if number is greater than 0
    if (num > 0) {
        printf("The number is Positive.\n");
    }
    // Condition 2: Check if number is less than 0
    else if (num < 0) {
        printf("The number is Negative.\n");
    }
    // If both conditions fail
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}

