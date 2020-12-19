/*Program to perform operations on stack using array*/
/*Liner Implementation of stack using Array*/

//SHRAYAN BANDYOPADHYAY LT-1
#include <stdio.h>
#define MAX 100
 
// Stack Declaration
typedef struct
{
    int elements[MAX];
    int TOP;
}
STACK;
STACK *s;
 
// function to insert item into stack
void pushElement(STACK *s,int ITEM)
{
    if(s->TOP == MAX-1)
 
    { 
        printf("\n THE STACK is FULL.\n");
        return;  
    }
    s->elements[++s->TOP]=ITEM;
    printf("\n THE ITEM IS INSERTED SUCCESSFULLY \n");
}
 
// function to delete an item from the stack
int popElement(STACK *s)
{int itm;
    if(s->TOP==-1)   { printf("\n THE STACK IS EMPTY \n"); return; }
    itm=s->elements[s->TOP];
    s->TOP--;
    printf("\n ITEM IS REMOVED: %d \n",itm);    
}
 
// Function to display stack elements
void dispItems(STACK *s)
{
    int i;
    if(s->TOP == -1) 
    { printf("STACK IS EMPTY."); return; }
    for(i=s->TOP;i>=0;i--)
        printf("%d->",s->elements[i]);
 
    printf("\n");
}
//Main function
void main()
{
    int num; char x;
 
    //Initialization of the stack

    s=(STACK*)malloc(sizeof(STACK));
    s->TOP=-1;
 
    int choice=0;
 
    again:
 
    //DISPLAYING STACK ELEMENTS.
    printf("\nSTACK ELEMENTS :");
    dispItems(s);
    printf("\nSTACK OPTIONS \n 0: Exit\n 1: Add item\n 2: Remove item \n Please Enter your choice :");
    scanf("%d",&choice);
 
    switch(choice)
    {
        case 0:
            exit(1);
        break;
 
        case 1:
            printf("\nEnter an item to insert:");
            scanf("%d",&num);
            pushElement(s,num);
        break;
 
        case 2:
            popElement(s);
        break;
 
        default:
            printf("\nThe choice you entered is invalid !!");
        break;
 
    }
 
scanf("%c",&x);
goto again;
}