#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct linkedlist
{
 int info;
 struct linkedlist *next;
}node;

void main()
{
  void insert_at_beg(node **, int);
  void insert_at_end(node **, int);
  void insert_in_mid(node **, int);
  void traversing(node *);
  node* search(node *,int);

  int val,*node_add;
  int choice;
  node *head;               // contains address of structure node ke head ki.
  head=NULL;


  system("cls");

     while(1)
     {
	system("cls");
		printf("\t \t \t MENU \n");
	printf("\t-------------------------------------\n");
	printf("\t 1.Insert at Beginning \n");
	printf("\t 2.Insert at End \n");
	printf("\t 3.Insert in Middle \n");
	printf("\t 4.Traversing \n");
	printf("\t 5.Reverse Traversing \n");
	printf("\t 6.Delete at Beginning \n");
	printf("\t 7.Delete at End \n");
	printf("\t 8.Delete after Element \n");
	printf("\t 9.Delete Entire List \n");
	printf("\t 10.Search an Element \n");
	printf("\t 11.Reverse Linkedlist \n");
	printf("\t 12.Exit \n");
	printf("\t Enter your choice: ");
	scanf("%d",&choice);

	  switch(choice)
	  {
	   case 1:
	       printf("\n \t Enter value to insert in LL: ");
	       scanf(" %d",&val);
	       insert_at_beg( &head, val);

	   break;

	   case 2:

	       printf("\n \t Enter value to insert in LL: ");
	       scanf(" %d",&val);
	       insert_at_end( &head, val);
	   break;

	   case 3:
	       printf("\n \t Enter value to insert in LL: ");
	       scanf(" %d",&val);
	       insert_in_mid( &head, val);

	   break;

	   case 4:
	       traversing(head);
	       getch();
	   break;

	   case 10:
	       printf("Enter value to search: ");
	       scanf("%d",&val);

	       node_add=search(head,val);
	       if(&node_add!=NULL)
	       {
		 printf("%d is at position %p",val,&node_add);
	       }
	   break;

	   case 12:
		 return 1;
	   break;

	   default:
		printf("\n Invalid Choice");
		getch();

	  }

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

void insert_in_mid(node **head1, int value)
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
