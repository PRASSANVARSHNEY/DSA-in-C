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
