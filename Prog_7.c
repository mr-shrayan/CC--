//Program to perform operations on queue using array.

//SHRAYAN BANDYOPADHYAY LT-1
#include<stdio.h>
#define n 10
int main()
{
    int queue[n],choice=1,x=n,i,j=1,top=0,bottom=0;
    printf("QUEUE OPTIONS :");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(choice)
    {// user choice selection
        printf("\nENTER YOUR CHOICE :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            if(bottom==x)
                printf("\nTHE QUEUE IS FULL");
            else
            {//inserting items in the queue
                printf("\n Enter element number %d:",j++);
                scanf("%d",&queue[bottom++]);
            }
            break;
        case 2:
            if(top==bottom)
            {
                printf("\nTHE QUEUE IS EMPTY\n");
            }
            else
            {//deleting item from the queue
                printf("\n Deleted Element is %d",queue[top++]);
                x++;
            }
            break;
        case 3: // displaying all queue elements
            printf("\nELEMENTS IN THE QUEUE ARE: \n ");
            if(top==bottom)
                printf("\nTHE QUEUE IS EMPTY\n");
            else
            {
                for(i=top; i<bottom; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
        case 4:
            exit(0);
            default:// default output if no case is satisfied
                printf("THE CHOICE YOU ENTERED IS INVALID !!\n");
            }
        }
    }
    return 0;
}