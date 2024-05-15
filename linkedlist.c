#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct linkedlist{
	int info;
	struct linkedlist *next;
}node;

int main()
{
	void insert_before(node**,int);
	void insert_at_beg(node**,int);
	void insert_at_end(node**,int);
	void insert_after(node**,int);
	void delete_at_beg(node**);
	void delete_at_end(node**);
	void delete_entire_list(node**);
	void delete_after(node *);
	void traversing(node *);
	node* search(node *,int);
	
	int a;
	int val,*node_add;
	int choice;
	node *head;
	head=NULL;
	system("cls");
	while(1)
	{
		system("cls");
	    printf("\t---------------------------------------------\n");
	    printf("\t\t\tMENU\n\n");
    	printf("\t---------------------------------------------\n");
		printf("\t1.Insert At Beginning\n");
		printf("\t2.Insert At End\n");
		printf("\t3.Insert After Element\n");
		printf("\t4.Traversing\n");
		printf("\t5.Delete At End\n");
		printf("\t6.Delete At Beginning\n");
//		printf("\t7.Delete After Element\n");
		printf("\t8.Searching\n");
//		printf("\t9.Insert Before Element\n");
		printf("\t10.Reverse Linked List\n");
		printf("\t11.Delete Entire List\n");
		printf("\t12.Exit");
		printf("\n\n\tEnter Your Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				printf("Enter the Value To Inserted In Beginnig in LinkedList\n");
			    scanf("%d",&val);
			    insert_at_beg(&head,val);
			    break;
				}
			case 2:
				{
				printf("Enter the Value To Inserted In Ending In LinkedList\n");
				scanf("%d",&val);
				insert_at_end(&head,val);
				break;
				}
			case 3:
				{
//					printf("Enter the Element which you want to search for adding the next element In LinkedList");
//					
//					 scanf("%d",&a);
//					node_add=search(&head,a);
//					if(node_add!=NULL)
//					{    
					    printf("Enter the value to inserted in linked list\n");
					    scanf("%d",&val);
						insert_after(&head,val);
						break;
//					}
//					else
//					{
//						printf("The element not found ! Please Ensure that");
//						break;
//					}
				}
			case 4:
				{
					traversing(head);
	                getch();	
	                break;
                }
			case 5:
				{
					delete_at_end(&head);
					break;
				}
			case 6:
				{
					delete_at_beg(&head);
					break;
				}
//			case 7:
//				{
//					delete_after(&head,val);
//					break;
//				}
			case 8:
				{
					printf("Enter value to search:\n");
	                scanf("%d",&val);
                    node_add=search(&head,val);
	                if(&node_add!=NULL)
	              {
		            printf("%d is at position %p",val,&node_add);
	              }
	                break;
				}
			case 9:
				{
					printf("Enter the Number which you want to be inserted :\n");
					scanf("%d",&val);
					insert_before(&(head->next),val);
					break;
				}
			case 10:
		        {
		        	printf("fmdskfds");
		        	break;
				}
			case 11:
				{
				  delete_entire_list(&head);
				  printf("Congratulations! Your List Deleted.");
				  break;	
				}
			case 12:
				{
					exit(1);
				}
			default:
				{
					printf("Please Choose The Correct Option!!");
					break;
				}
		}
		getch();
	}
	getch();
}

void insert_at_beg(node **head1, int val)
{
 node *temp;
 temp = (node*)malloc(sizeof(node));

 if(temp == NULL)
  {
   printf("Unable to allocate memory");
   return;
  }
 temp->info = val;

  if(*head1!=NULL)
   {
    temp->next=(*head1);
    }
  else
   {
    temp->next=NULL;                 //head is null here
   // printf("--%p\n",*head1);
   }

  *head1=temp;                       // address of temp node stored in head and now its not null anymore

 // printf("==%p==%p",*head1,(*head1)->next);     //and head next is null now


}

void traversing(node *head)
{
  printf("\t\n");
  while(head!=NULL)
  {
   printf("%d->",head->info);
   head=head->next;
  }

}

node* search(node *head,int item)
{
  while(head!=NULL)
  {
   if(head->info==item)
     return head;
   else
     head=head->next;
  }
  return NULL;
}

void insert_at_end(node **head1, int val)
{
 node *temp, *loc;
 temp = (node*)malloc(sizeof(node));

 if(temp == NULL)
  {
   printf("Unable to allocate memory");
   return;
  }
 temp->info = val;

  if(*head1!=NULL)
   {
    loc=*head1;
     while(loc->next!=NULL)
     {
	 loc=loc->next;
     }

     temp->next=NULL;
     loc->next=temp;

    }
  else
   {
     temp->next=*head1;
     *head1=temp;
   }

}

void insert_after(node **head1,int value)
{
    node *temp, *loc;
    int val;
	printf("Enter value to insert after: ");
    scanf("%d",&val);
    loc=search(*head1,val);
    temp=(node*)malloc(sizeof(node));
    temp->info=value;
    temp->next=loc->next;
    loc->next=temp;
}
void delete_at_beg(node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

     node* Delete = *head;
    *head = (*head)->next;
    free(Delete);

    printf("Node deleted from the beginning.\n");
}
void delete_at_end(node** head) {
    node* temp = *head;
    node* previous = NULL;

    
    if (*head == NULL) {
        printf("Linked List is empty. Nothing to delete.\n");
        return;
    }

    // has only 1 node
    if (temp->next == NULL) {
        printf("%d deleted\n", (*head)->info);
        *head = NULL;
        free(temp);
        return;
    }

    // Traverse to the last node
    while (temp->next != NULL) {
        previous = temp;
        temp = temp->next;
    }

    
    previous->next = NULL;

    // Delete the last node
    printf("%d deleted\n", temp->info);
    free(temp);
}
void delete_after(node* prev_node) {
    if (prev_node == NULL || prev_node->next == NULL) {
        printf("Cannot delete. Invalid node or no next node.\n");
        return;
    }

    node* target_node = prev_node->next;
    prev_node->next = target_node->next;
    free(target_node);
    printf("Node deleted successfully.\n");
}
void delete_entire_list(node** head1) {
    node* current = *head1;
    node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    // Set head to NULL (empty list)
    *head1 = NULL;
}
void insert_before(node** head_ref, int val) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->info = val;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

