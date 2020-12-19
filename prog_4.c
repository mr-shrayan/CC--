// C program to find the largest number in an array. 

#include <stdio.h>
int main()
{
  int arr[100], arr_size, i, pointer = 0;

  printf("Enter the number of elements in array\n");
  scanf("%d", &arr_size);

  printf("Enter %d integers\n", arr_size);

  for (i = 0; i < arr_size; i++)
    scanf("%d", &arr[i]);

  for (i = 1; i < arr_size; i++)
    if (arr[i] > arr[pointer])
      pointer = i;

  printf("Largest element is %d and is at location %d.\n", arr[pointer], pointer+1);
  return 0;
}