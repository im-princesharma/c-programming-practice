/*
==================================================
Title   : Linear Search
Purpose : Search for an element in an array.
Working : Elements are checked one by one
          until the target value is found.
==================================================
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i, key, found = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found\n");
    }

    return 0;
}
