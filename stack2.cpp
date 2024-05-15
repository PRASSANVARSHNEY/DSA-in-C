#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node* next;
};
node* head;
void push( int val)
{
    node*temp = (node*)malloc(sizeof(node));
    if(temp == NULL)
		 printf("Memory cannot be allocated");
    else
    {
        temp->info = val;
        temp->next = head;
        head=temp;
        
    }
}
int pop()
{
    if(head ==NULL) printf("Node cannot be deleted as List is empty");
    else
    {
    node* temp = head;
    head =head->next;
    return temp->info;
    }
}
int main()
{
    int option;
    int val;
    int ele;
    int result;
    node *head = NULL;
    while (1)
    {
        printf("\t\tMENU \n");
        printf("\t1 : push\n");
        printf("\t2 : pop\n");
        printf("\t3 : Exit\n");
        printf("\nENTER THE OPERATION:\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1: 
		{//Push Operation
                printf("Enter Value to Insert :\n");
                scanf("%d", &val);
                push(val);
                break;
        }
        case 2: //Pop Operation
               {
				 int result = pop();
                printf("Popped element : %d\n ",result);
                break;
            }
        case 3: 
		{
		exit(1);	
		}
        default:
                printf("Choose a valid operation.");
                break;
        }
        
    }
}
