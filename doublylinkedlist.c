#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node {
	int info;
	struct node * next;
	struct node * prev;
}node;
node* createNode(int data)
 {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->info = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

int main()
{
	int choice;
	void insert_at_beg(node**,int);
	void insert_at_end(node**,int);
	void inser_after_element(node*,int);
	void insert_before_element(node*,int);
	void traversing(node* head);
//	node* createNode(int);

	node* head = NULL;
	int value;
	
	
	
	
	
	
	
	
	system("cls");
	while(1){
		system("cls");
		printf("\t\tMenu\n");
		printf("\t1.Insert At Begining\n");
		printf("\t2.Insert At End\n");
		printf("\t3.Insert After Element \n");
		printf("\t4.Insert Before Element\n");
		printf("\t5.Delete Entire List\n");
		printf("\t6.Delete At Beginning\n");
		printf("\t7.Delete At End\n");
		printf("\t8.Delete Before Element\n");
		printf("\t9.Delete After Element\n");
		printf("\t10.Traversing\n");
		printf("\t11.Traversing Reverse\n");
		printf("\t12.Searching\n");
		printf("\t13.Exit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("\nENTER THE ELEMENT:\n");
					scanf("%d",&value);
					insert_at_beg(&head,value);
					break;
				}
			case 2:
				{
					printf("\nENTER THE ELEMENT:\n");
					scanf("%d",&value);
					insert_at_end(&head,value);
					break;
				}
			case 3:
				{
					printf("\nENTER THE VALUE:");
					scanf("%d",&value);
					insert_after_element(&head,value);
					break;
				}
			case 4:
				{
					printf("\nENTER THE ELEMENT:\n");
					scanf("%d",&value);
					insert_before_element(&head,value);
					break;
				}
//			case 5:
//				{
//					delete_at_beg();
//					break;
//				}
//			case 6:
//				{
//					delete_at_end();
//					break;
//					
//				}
//			case 7:
//				{
//					delete_at_middle();
//					break;
//					
//				}
//			case 8:
//				{
//					delete_before_element();
//					break;
//				}
//			case 9:
//				{
//					delete_after_element();
//					break;
//				}
			case 10:
				{
					head->next->prev = head;
					head->next->next->prev = head->next;
					traversing(head);
					break;
				}
//			case 11:
//				{
//					traversing_reverse();
//					break;
//				}
//			case 12:
//				{
//					search();
//					break;
//					
//				}
			case 13:
				{
					exit(1);
				}
			default:
				{
					printf("INVALID CHOICE");
				}
		}
		getch();
	}
	getch();
}

void insert_at_beg(node **head1, int data)
{
	node* newNode = (node*)malloc(sizeof(node));
    newNode->info = data;
    newNode->next = *head1;
    newNode->prev = NULL;

    
    if (*head1 != NULL) {
        (*head1)->prev = newNode;
    }

    // Update the head pointer
    *head1 = newNode;
}
void insert_at_end(node **head1, int data)
{
	node* newNode = (node*)malloc(sizeof(node));
    newNode->info = data;
    newNode->next = NULL;

    
    if (*head1 == NULL) {
        newNode->prev = NULL;
        *head1 = newNode;
        return;
}
}
void insert_before_element(node *head1, int data)
{
	if (head1 == NULL) {
        printf("Cannot insert before a NULL node.\n");
        return;
    }
    node* newNode = createNode(data);
	 node* prevNode = head1->next;
//	node* newNode = (node*)malloc(sizeof(node));
//	newNode->info = data;
	
	newNode->next = head1;
    newNode->prev = prevNode;
    head1->prev = newNode;

    if (prevNode!= NULL)
        head1->next = newNode;
}
void insert_after_element(node* head1, int data)
{
	if (head1 == NULL)
	 {
        printf("Cannot insert after a NULL node.\n");
        return;
    }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->info = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    node* nextNode = head1->next;

    newNode->next = nextNode;
    newNode->prev = head1;
    head1->next = newNode;

    if (nextNode != NULL)
        nextNode->prev = newNode;
}

void traversing(node* head)
{
    node* current = head;
    if (current == NULL)
    {
    	printf("THE LIST IS EMPTY");
    	return 0;
	}
    while (current != NULL)
	 {
        printf("%d ", current->info);
        current = current->next;
    }
    printf("\n");
}
