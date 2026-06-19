/*
==================================================
File: nested_if.c
Topic: Nested If
Purpose: Learn multiple condition checking
==================================================
*/

#include <stdio.h>

int main()
{
    int age;
    char citizen;

    printf("=====================================\n");
    printf("          NESTED IF EXAMPLE\n");
    printf("=====================================\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian citizen? (Y/N): ");
    scanf(" %c", &citizen);

    if(age >= 18)
    {
        if(citizen == 'Y' || citizen == 'y')
        {
            printf("\nEligible to vote.\n");
        }
        else
        {
            printf("\nCitizen requirement not met.\n");
        }
    }
    else
    {
        printf("\nAge requirement not met.\n");
    }

    printf("\nVerification completed.\n");

    return 0;
}
