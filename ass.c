////#include<stdio.h>
////#define max 100
////void addition_matrix(int a[max][max], int b[max][max], int d[max][max], int r, int c )
////{
////	int i,j;
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			d[i][j]=a[i][j]+b[i][j];
////		}
////	}
////}
////void inputarray(int a[max][max],int r,int c)
////{
////	int i,j;
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			scanf("%d",&a[i][j]);
////		}
////	}
////}
////void outputarray(int a[max][max],int r,int c)
////{
////	int i,j;
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			printf("%d",a[i][j]);
////		}
////		printf("\n");
////   }
////	
////}
////void multiplication_matrix(int a[max][max], int b[max][max], int d[max][max], int r, int c, int f )
////{
////	int i,j,k;
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			d[i][j]=0;
////			for(k=0;k<f;k++)
////			{
////				d[i][j] += a[i][k] * b[k][j];
////			}
////		}
////	}
////}
////int main()
////{
////	
////	int r1,c1,r2,c2;
////	int a[max][max],b[max][max],c[max][max];
////	int choice;
////	while(1)
////	{
////		system("cls");
////    	printf("1.ADDITION OF MATRIX\n");
////	    printf("2.MULTIPLICATION OF MATRIX\n");
////	    printf("3.EXIT\n");
////	    printf("ENTER YOUR OPERATION:\n");
////	    scanf("%d",&choice);
////	    switch(choice)
////	    {
////	    	case 1:
////	    		{ 
////	    		  //ADDITION OF MATRIX
////	    		  printf("\nENTER THE NO. OF ROWS AND COLUMNS OF FIRST MATRIX:\n");
////	    		  scanf("%d %d",&r1,&c1);
////	    		  printf("\nENTER THE ELEMENTS OF ARRAY:\n");
////	    		  inputarray(a,r1,c1);
////	    		  printf("\nENTER THE NO. OF ROWS AND COLUMNS OF SECOND MATRIX:\n");
////	    		  scanf("%d %d",&r2,&c2);
////	    		  printf("\nENTER THE ELEMENTS OF ARRAY:\n");
////	    		  inputarray(b,r2,c2);
////	    		  if(r1==r2  && c1==c2)
////	    		  {
////	    		  	addition_matrix(a,b,c,r1,c1);
////	    		  	outputarray(c,r1,c1);
////	    		  	
////				  }
////				  else
////				  {
////				  	printf("\nADDITION IS NOT POSSIBLE\n");
////				  }
////	    			break;
////				}
////			case 2:
////				{ 
////				   //MULTIPLICATION
////				   printf("\nENTER THE NO. OF ROWS AND COLUMNS OF FIRST MATRIX:\n");
////	    		  scanf("%d %d",&r1,&c1);
////	    		  printf("\nENTER THE ELEMENTS OF ARRAY:\n");
////	    		  inputarray(a,r1,c1);
////	    		  printf("\nENTER THE NO. OF ROWS AND COLUMNS OF SECOND MATRIX:\n");
////	    		  scanf("%d %d",&r2,&c2);
////	    		  printf("\nENTER THE ELEMENTS OF ARRAY:\n");
////	    		  inputarray(b,r2,c2);
////	    		  if(c1==r2)
////	    		  {
////	    		  	multiplication_matrix(a,b,c,r2,c1,r1);
////	    		  	outputarray(c,r1,c1);
////	    		  	
////				  }
////				  else
////				  {
////				  	printf("\nMULTIPLICATION IS NOT POSSIBLE\n");
////				  }  
////					break;
////				}
////			case 3:
////				{
////					exit(1);
////				}
////			default:
////				{
////					printf("INVALID CHOICE\n");
////					break;
////				}
////		}
////		getch();
////	}
////}
//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct linkedlist {
//    struct linkedlist *prev;
//    int info;
//    struct linkedlist *next;
//} node;
//
//void insert_beg(node **, node **, int);
//void traversing(node *);
//void reverse_traversing(node *);
//void insert_end(node **, node **, int);
//node* searching(node *, int);
//void insert_afer_elem(node *, node **, int, int);
//void insert_before_elem(node **, node *, int, int);
//void delete_at_beg(node **, node **);
//void delete_at_end(node **, node **);
//void delete_after_elem(node *, node **, int);
//void delete_before_elem(node **, node *, int);
//
//int main() {
//    node *head = NULL, *tail = NULL;
//    int c, val, val1;
//    while (1) {
//        printf("\n");
//        printf("1. insert at beginning\n");
//        printf("2. insert at end\n");
//        printf("3. insert after element\n");
//        printf("4. insert before element\n");
//        printf("5. delete at beginning\n");
//        printf("6. delete at end\n");
//        printf("7. delete after element\n");
//        printf("8. delete before element\n");
//        printf("9. traversing\n");
//        printf("10. reverse traversing\n");
//        printf("11. searching\n");
//        printf("12. Exit\n");
//        printf("Enter choice for operations: ");
//        scanf("%d", &c);
//        switch (c) {
//            case 1:
//                printf("enter value : ");
//                scanf("%d", &val);
//                insert_beg(&head, &tail, val);
//                break;
//            case 2:
//                printf("enter value : ");
//                scanf("%d", &val);
//                insert_end(&head, &tail, val);
//                break;
//            case 3:
//                printf("enter before value : ");
//                scanf("%d", &val);
//                printf("enter value : ");
//                scanf("%d", &val1);
//                insert_afer_elem(head, &tail, val, val1);
//                break;
//            case 4:
//                printf("enter after value : ");
//                scanf("%d", &val);
//                printf("enter value : ");
//                scanf("%d", &val1);
//                insert_before_elem(&head, tail, val, val1);
//                break;
//            case 5:
//                delete_at_beg(&head, &tail);
//                break;
//            case 6:
//                delete_at_end(&head, &tail);
//                break;
//            case 7:
//                printf("enter value : ");
//                scanf("%d", &val);
//                delete_after_elem(head, &tail, val);
//                break;
//            case 8:
//                printf("enter value : ");
//                scanf("%d", &val);
//                delete_before_elem(&head, tail, val);
//                break;
//            case 9:
//                traversing(head);
//                break;
//            case 10:
//                reverse_traversing(tail);
//                break;
//            case 11:
//                printf("enter value : ");
//                scanf("%d", &val);
//                printf("the value is available at : %p\n", searching(head, val));
//                break;
//            case 12:
//                exit(0);
//                break;
//            default:
//                printf("Invalid choice! Please enter a valid option.\n");
//        }
//    }
//    return 0;
//}
//
//void insert_beg(node **head1, node **tail1, int val) {
//    node *temp;
//    temp = (node *)malloc(sizeof(node));
//    if (temp == NULL) {
//        printf("memory doesn't allocated\n");
//        return;
//    }
//    temp->info = val;
//    temp->prev = NULL;
//    if (*head1 == NULL) {
//        temp->next = NULL;
//        *head1 = temp;
//        *tail1 = temp;
//    } else {
//        temp->next = (*head1);
//        (*head1)->prev = temp;
//        *head1 = temp;
//    }
//}
//
//void traversing(node *head1) {
//    while (head1 != NULL) {
//        printf("%d->", head1->info);
//        head1 = head1->next;
//    }
//    printf("\n");
//}
//
//void reverse_traversing(node *tail) {
//    while (tail != NULL) {
//        printf("%d->", tail->info);
//        tail = tail->prev;
//    }
//    printf("\n");
//}
//
//void insert_end(node **head1, node **tail1, int val) {
//    node *temp;
//    temp = (node *)malloc(sizeof(node));
//    if (temp == NULL) {
//        printf("memory doesn't allocated\n");
//        return;
//    }
//    temp->info = val;
//    temp->next = NULL;
//    temp->prev = *tail1;
//    if (*tail1 == NULL) {
//        *head1 = temp;
//    } else {
//        (*tail1)->next = temp;
//    }
//    *tail1 = temp;
//}
//
//node* searching(node *head, int val) {
//    while (head != NULL) {
//        if (head->info == val) {
//            return head;
//        }
//        head = head->next;
//    }
//    return NULL; // Value not found
//}
//
//void insert_afer_elem(node *head, node **tail1, int val, int val1) {
//    node *temp, *loc;
//    temp = (node *)malloc(sizeof(node));
//    loc = searching(head, val);
//    if (temp == NULL) {
//        printf("memory doesn't allocated\n");
//        return;
//    }
//    if (loc != NULL) {
//        temp->info = val1;
//        temp->next = loc->next;
//        temp->prev = loc;
//        if (loc->next != NULL)
//            (loc->next)->prev = temp;
//        loc->next = temp;
//        if (temp->next == NULL)
//            *tail1 = temp;
//    } else {
//        printf("Value %d not found in the list.\n", val);
//    }
//}
//
//void insert_before_elem(node **head1, node *tail, int val, int val1) {
//    node *temp, *loc;
//    temp = (node *)malloc(sizeof(node));
//    loc = searching(*head1, val);
//    if (temp == NULL) {
//        printf("Memory not allocated\n");
//        return;
//    }
//    if (loc != NULL) {
//        temp->info = val1;
//        temp->next = loc;
//        temp->prev = loc->prev;
//        if (loc->prev != NULL)
//            (loc->prev)->next = temp;
//        else
//            *head1 = temp;
//        loc->prev = temp;
//    } else {
//        printf("Value %d not found in the list.\n", val);
//    }
//}
//
//void delete_at_beg(node **head1, node **tail1) {
//    if (*head1 == NULL) {
//        printf("List is empty.\n");
//        return;
//    }
//    node *temp = *head1;
//    if ((*head1)->next == NULL) {
//        *head1 = NULL;
//        *tail1 = NULL;
//    } else {
//        *head1 = (*head1)->next;
//        (*head1)->prev = NULL;
//    }
//    free(temp);
//}
//
//void delete_at_end(node **head1, node **tail1) {
//    if (*tail1 == NULL) {
//        printf("List is empty.\n");
//        return;
//    }
//    node *temp = *tail1;
//    if ((*tail1)->prev == NULL) {
//        *head1 = NULL;
//        *tail1 = NULL;
//    } else {
//        *tail1 = (*tail1)->prev;
//        (*tail1)->next = NULL;
//    }
//    free(temp);
//}
//
//void delete_after_elem(node *head, node **tail1, int val) {
//    node *loc = searching(head, val);
//    if (loc == NULL || loc->next == NULL) {
//        printf("Element not found or it's the last element.\n");
//        return;
//    }
//    node *temp = loc->next;
//    loc->next = temp->next;
//    if (temp->next != NULL)
//        (temp->next)->prev = loc;
//    if (temp == *tail1)
//        *tail1 = loc;
//    free(temp);
//}
//
//void delete_before_elem(node **head1, node *tail, int val) {
//    node *loc = searching(*head1, val);
//    if (loc == NULL || loc->prev == NULL) {
//        printf("Element not found or it's the first element.\n");
//        return;
//    }
//    node *temp = loc->prev;
//    if (temp == *head1)
//        *head1 = loc;
//    else
//        (temp->prev)->next = loc;
//    loc->prev = temp->prev;
//    free(temp);
//}



#include<stdio.h>
#include<stdlib.h>
#define NIL -1
#define MAX 10


typedef struct stacktype {
    int a[MAX];
    int top;
}stack;

void push(stack *, int);
int pop(stack *);
int isFull(stack);
int isEmpty(stack);
int peep(stack);


void main() {
    int ch;
    int val;
    stack s;
    s.top = NIL;
    while(1) {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: if(isFull(s))
            {
                printf("Stack is full");
                return;
            }
            else
            {
                printf("Enter value : ");
                scanf("%d", &val);
                push(&s, val);
            }
            break;

            case 2: if(isEmpty(s))
            {
                printf("Stack is empty.");
                return;
            }
            else
            {
                
                printf("Popped item is : %d", pop(&s));
            }
            break;

            case 3: exit(1);
                    break;
                    
            default: printf("Enter a valid choice.");
                        break;
        }
    }
}

int isFull(stack s) {
    if(s.top == MAX - 1)
        return 1;
    else    
        return 0;
}

int isEmpty(stack s) {
    if(s.top == NIL) 
        return 1;
    else 
        return 0;
}

void push(stack *p, int val) {
    p -> top = (p -> top) + 1;
    p->a[p -> top] = val;
}

int pop(stack *p)
{
    int val;
    val = p -> a[p -> top];
    (p -> top)-= 1;
    return val;
}
