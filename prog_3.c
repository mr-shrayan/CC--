// C Program to merge 2 Array.

#include<stdio.h>
 
int main()
{
 	int arr1_Size, arr2_size, mrg_size, i, j;
	int arr1[50], arr2[50], merge[100];
  
 	printf("\n Enter the size of the first array   :  ");
 	scanf("%d", &arr1_Size);
 
 	printf("\n Enter the elements of the first array :\n ");
 	for(i= 0; i< arr1_Size; i++)
  	    {
      	    scanf("%d", &arr1[i]);
  	    }

  	printf("\n Enter the size of the second array   :  ");
 	scanf("%d", &arr2_size);
   
 	printf("\n Enter the elements of the second array :\n ");
 	for(i= 0; i< arr2_size; i++)
  	    {
      	    scanf("%d", &arr2[i]);
  	    }
  	
  	for(i = 0; i < arr1_Size; i++)
  	    {
      	    merge[i] = arr1[i];
  	    }
  	
	mrg_size = arr1_Size + arr2_size;
 
 	for(i= 0, j= arr1_Size; j< mrg_size && i< arr2_size; i++, j++)
  	    {
  		    merge[j] = arr2[i];
  	    }
 
 	printf("\n Total array size after merging %d  \n", mrg_size); 
    printf("\n Array after merging \n");
 	for(i= 0; i< mrg_size; i++)
  	    {
    	    printf(" %d \t ",merge[i]);
  	    }
 
  	return 0;
}