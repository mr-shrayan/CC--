// C Program to search a specific Number in an array

#include <stdio.h>

int main()
{
    int arr[50];
    int size, i, j, search;
    
    printf("Please Enter an Array Size: "); // Size of the array 
    scanf("%d", &size);

    printf("\nEnter elements in array: ");// Array elements Input
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &j);

    search = 0; 
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == j)
        {
            search = 1;
            break;
        }
    }
    if(search == 1)
    {
        printf("\n%d is found at position %d", j, i + 1); // If the element is present
    }
    else
    {
        printf("\n%d is not present in the array", j); // If the element is not present
    }

    return 0;
}