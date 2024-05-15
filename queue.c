#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
#define NIL -1 

typedef struct node{
    int a[max];
    int front,rear;
}queue;

void insert(queue *q,int val) {
    if(isfull(*q)) {
        printf("Queue is full.\n");
        return;
    }
    if(q->front == NIL) {
        q->front = 0;
    }
    q->rear = q->rear + 1;
    q->a[q->rear] = val;
}

int delete(queue *q) {
    if(isempty(*q)) {
        printf("Queue is empty.\n");
        return NIL;
    }
    int val = q->a[q->front];
    q->front = q->front + 1;
    if(q->front > q->rear) {
        q->front = q->rear = NIL;
    }
    return val;
}

int isfull(queue q) {
    return q.rear == max-1;
}

int isempty(queue q) {
    return q.front == NIL || q.front > q.rear;
}

int main() {
    int ch, val;
    queue q;
    q.front = q.rear = NIL; // Initialize queue

    while (1) {
        printf("\t\tMENU \n");
        printf("\t1 : Insert\n");
        printf("\t2 : Delete\n");
        printf("\t3 : Exit\n");
        printf("\nENTER THE OPERATION:\n");
        scanf("%d", &ch);
        switch (ch) {
        case 1: // Insert Operation
            printf("Enter Value to Insert :\n");
            scanf("%d", &val);
            insert(&q, val);
            printf("Value inserted.\n");
            break;
        case 2: // Delete Operation
            val = delete(&q);
            if(val != NIL) {
                printf("Deleted element : %d\n", val);
            }
            break;
        case 3: // Exit
            exit(0);
        default:
            printf("Choose a valid operation.\n");
            break;
        }
    }
}

