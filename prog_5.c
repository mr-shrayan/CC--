

//C program to sort an array 


#include <stdio.h>

int main()
{
	int a[50],n,i,j;
	printf("Please Enter an Array Size: ");
        scanf("%d",&n);
        printf("\nEnter elements in array: ");
        
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

// Loop for ascending order
	for (int i= 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}  
		}
	}
	printf("\n\nAscending Order: ");
	for (int i= 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
// Loop For Descending Order
	for (int i= 0; i < n; i++)
	{
		for (int j= 0; j < n; j++)
		{
			if (a[j] < a[i])
			{
			    int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\n\nDescending Order: ");
	for (int i= 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}

	return 0;

}