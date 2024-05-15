#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 10
#define nil -1
typedef struct node{
	int a[max];
	int top;
}stack;
void push(stack *s,int value)
{
	s->top = (s->top)+1;
	s->a[s->top] = value;
}
int pop(stack *s)
{
	int value;
	value = s->a[s->top];
	s->top = (s->top)-1;
	return value;
}
int isfull(stack s)
{
	if(s.top==max-1)
	return 1;
	else
	return 0;
}
int isEmpty(stack s)
{
	if(s.top==nil)
	return 1;
	else
	return 0;
}
int main()
{
	stack s;
	int choice;
	int value;
	system("cls");
	while(1)
	{
		system("cls");
	    printf("\t\tENTER YOUR OPERATIONS:\n");
	    printf("\t\t1.PUSH\n");
	    printf("\t\t2.POP\n");
	    printf("\t\t3.EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					//PUSH FUNCTION
					if(isfull(s))
					{
						printf("\nSTACK IS FULL\n");
						
					}
					else
					{
				     	printf("\nENTER THE VALUE TO BE INSERTED\n");
				 	    scanf("%d",&value);
				 	    push(&s,value);
			      	}
			      	break;
				}
			case 2:
				{
					if(isEmpty(s))
					{
						printf("\nSTACK IS EMPTY\n");
						
					}
					else
					{
						//pop function
						printf("THE VALUE TO BE POPPED : %d",pop(&s));
						
					}
					break;
				}
			case 3:
				{
					exit(1);
				}
			}
	getch();			
	}
	
}
