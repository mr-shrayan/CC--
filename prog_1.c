// C program to traverse an array 
  #include <stdio.h>
        void Array(int* arr, int n) 
        { 
            int i; 
  
            printf("The Array is: "); 

            for (i = 0; i < n; i++) 
             { 
                printf("%d ", arr[i]); 
             } 

            printf("\n"); 

        } 

int main() 
    { 
        int arr[] = { 3, 0, 6, -4, 1, 2}; 
        int n = sizeof(arr) / sizeof(arr[0]); 
  
        Array(arr, n); 
  
        return 0; 
    } 