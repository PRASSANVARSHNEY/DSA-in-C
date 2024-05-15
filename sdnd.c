// Singly Linked List with basic operations.

#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist{
    int info;
    struct linkedlist *next;
} node;

void insert_at_beg(node **head, int val){
    node *new_node = NULL;
    new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->info = val; // put the val in current node's info

    // imp step (+ don't change order of below two lines)
    new_node->next = *head; // put the previous node's head to the new node 'next' to link them.
    *head = new_node; // now, head should to point the new node ditching the previous head.
}

node* search(node *head, int node_val){
    while(head != NULL){
        if(head->info == node_val){
            return head;
        }else
        head = head->next;
    }
}

void insert_after_node(node **head, int val){
    if(head == NULL){
        printf("List is empty. First create some nodes.");
        exit(1);
    }

    int node_val;
    printf("Enter the value of node after which element should be entered: ");
    scanf("%d", &node_val);
    node *loc;
    loc = search(*head, node_val);

    node *new_node = (node *) malloc(sizeof(node));
    if(new_node== NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->info = val;
    
    new_node->next = loc->next;
    loc->next = new_node;
}

void insert_at_end(node **head, int val){
    node new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->info = val; // put val in new_node's info.
    new_node->next = NULL; // The new node will be the last node, so its next should be NULL

    if(*head == NULL){ // If the list is empty, make the new node the head
        *head = new_node;
    } else {
        node *temp = *head; // Traverse the list until the last node
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node; // Make the new node the next node of the last node
    }
}


void traverse_beg(node *head){
    printf("Linked List elements: ");
    if(head == NULL){
        printf("No element found!");
    } else  {
        while(head != NULL){
        printf("%d ", head->info);
        head = head->next;
    }
    }
    printf("\n");
}

int main(){
    int val, choice;
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    head->info = 29;
    head->next = NULL;
    
    node *newnode = NULL;
    newnode = (node *)malloc(sizeof(node));
    newnode->info = 40;
    newnode->next = NULL;
    head->next = newnode;

    newnode = (node *)malloc(sizeof(node));
    newnode->info = 445;
    newnode->next = NULL;
    head->next->next = newnode;


    while(1){
        printf("----Menu----\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert after a node\n");
        printf("4. Traverse from beginning\n");
        printf("5. Traverse from end\n");
        printf("6. Delete at beginning\n");
        printf("7. Delete at end\n");
        printf("8. Delete after node\n");
        printf("9. Delete entire list\n");
        printf("10. Search an Element\n");
        printf("11. Reverse Linked List\n");
        printf("12. Exit\n");
        scanf("%d", &choice);

        switch (choice){
            case 1: 
                printf("Enter a value to be inserted in the Linked List at the beg: ");
                scanf("%d", &val);
                insert_at_beg(&head, val); // call by reference, because we need to change head.
                break;
            case 2: 
                printf("Enter a value to be inserted in the Linked List at the end: ");
                scanf("%d", &val);
                insert_at_end(&head, val); // call by reference, because we might need to change head.
                break;
            case 3:
                printf("Enter a value to be inserted after a node: ");
                // scanf("%d", &val);
                insert_after_node(head, val); 
                break;
            case 4: 
                traverse_beg(head); // call by value, because no manipulation of head.
                break;
            case 12:
                exit(0);
            default: 
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}
