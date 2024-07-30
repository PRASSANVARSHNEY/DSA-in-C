//STACK USING ARRAY
#include<stdio.h>
#include<stdlib.h>
#define n 5 
int stack[n];
int top = -1;
void push()
{
	int item;
	if(top==n-1)
	{
		printf("THE STACK IS OVERFLOW !\n");
		return ;
	}
	else
	{
		printf("\nENTER THE VALUE:\n");
		scanf("%d",&item);
		top++;
		stack[top]=item;
		return ;
	}
}
int pop()
{
	int popped_item;
	if(top==-1)
	{
		printf("\nTHE STACK HAS EMPTY!\n");
		return 0;
	}
	else
	{
		popped_item = stack[top];
		top--;
		return popped_item;
	}
}
int peek()
{
	int item;
	if(top==-1)
	{
		printf("\nTHE STACK HAS EMPTY!\n");
		return 0;
	}
	else
	{
		item = stack[top];
		return item;
	}
	
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	
}
int main()
{
	int choice;
	while(1)
	{
		printf("\t\tMENU\n");
		printf("\t1.PUSH\n");
		printf("\t2.POP\n");
		printf("\t3.PEEK\n");
		printf("\t4.DISPLAY\n");
		printf("\t5.EXIT\n");
		printf("ENTER YOUR CHOICE :\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					printf("THE POPPED ITEM IS %d",pop());
					break;
				}
			case 3:
				{
					printf("THE TOP ELEMENT IS %d",peek());
					break;
				}
			case 4:
				{
					display();
					break;
				}
			case 5:
				{
					exit(1);
				}
		}
	}
}
