#include<stdio.h>
#include<stdlib.h>
int front=-1; int rear=-1;
int size;
int arr[100];
int pop()
{
	if(rear==front)
	{
		printf("queue unerflow"); return 0;
	}
	else
	{
		return arr[++rear];
	}
}
void push()
{
	if(front==size-1)
	{
		printf("Queue Overflow");
	}
	else
	{
	int val;
	printf("Enter the value to be added\n");
	scanf("%d",&val);
	arr[++front]=val;
	}
}
void display()
{
	int i;
	for(i=rear;i<=front;i++)
	{ 	
		printf("The %d element is %d \n",i,arr[i]);	
	}
}
int main()
{
	printf("	THIS PROGRAM IS OF QUEUE USING ARRAY 	\n");
	printf("	Enter The Size Of The Queue		\n");
	scanf("%d",&size);
	arr[size];
	int opt; 
	printf("		NOW WE ARE READY, So AVENGERS ASSEMBLE 		\n");
	do
	{
		printf(" Enter 1 for adding elements \n Enter 2 for displaying all elements \n Enter 3 to delete an element from queue \n Enter 0 to stop \n Enter Your Choice here ...... ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				{
					push();break;
				}
				case 2:
					{
						display();break;
					}
					case 3:
						{
							int temp=pop();
							printf("	\n The Deleted Element is %d \n",temp);
							break;
						}
						case 0:
							{
								printf("Process Stopped Succesfully \n");break;
							}
							deafult:
								{
									printf("OOPs You Entered incorrect option \a \n");break;
								}
		}
	}while(opt!=0);
}
