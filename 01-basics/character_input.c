/*
==================================================
File: character_input.c
Topic: Character Input
Purpose: Read characters from user
==================================================
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\nCharacter Information\n");
    printf("---------------------\n");

    printf("Character : %c\n", ch);
    printf("ASCII Code: %d\n", ch);

    return 0;
}
