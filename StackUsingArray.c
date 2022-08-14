#include<stdio.h>
#include<stdlib.h>
int front=-1;
int arr[100];
static int size;
int main()
{
   
    printf("    THIS PROGRAM IS FOR STACK IMLEMENTATION USING ARRAY      ");
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int opt;int val;
     printf("1 for adding element\n2 for deleting element\n3 for displaying the stack elements\n0 to stop\n");
        scanf("%d",&opt);
    do
    {
        switch(opt)
        {
            case 1: //inserting elements
            {
                printf("Enter the value to be added in stack\n");
                scanf("%d",&val);
                push(val);break;
            }
            case 2:
            {
                int temp=pop();
                printf("deleted element is %d \n",temp);break;
            }
            case 3:
            {
                display();
            }
            case 0:
            {
                printf("\nEXITED THE PROCESS\n");
                break;
            }
            default :
            {
                printf("\nIncorrect Option\n");break;
            }
        }
    }while(opt!=0);
}
void push(int val)  //inserting element in stack
{
    if(front==size) //if stack is full then we cannot add element
    {
        printf("Stack Overflow");
    }
    else
    {
        arr[++front]=val;
    }
}
int pop() // deleting element from stack
{
    if(front==-1) //if stack is empty we cannot delete anything from it
    {
        printf("Stack Underflow");
    }
    else
    {
        return arr[front--];
    }
}
void display() //displaying the elements of the array;
{
    int i;
    for(i=0;i<=front;i++)
    {
        printf("\n %d \n",arr[i]);
    }
}
