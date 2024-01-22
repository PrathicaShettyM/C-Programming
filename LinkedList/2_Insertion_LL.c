// all 4 cases of insertion are covered
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// LL traversal
void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// case 1: insert in the beginning
struct Node* insertInTheBeginning(struct Node* head, int data){
    // new node which u want to insert
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head; 
    return ptr;
}

// case 2: insert in the between
struct Node* insertAtIndex(struct Node* head, int data, int index){
    // new node which u want to insert
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    // take another pointer pointing to the head
    struct Node* p = head;
    ptr->data = data;

    // take 'p' to (index-1)th position
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    // make new links

    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// case 3: insert at the end
struct Node* insertAtTheEnd(struct Node* head, int data){
    // new node which u want to insert
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    // take another pointer pointing to the head
    struct Node* p = head;
    ptr->data = data;

    // bring 'p' to (NULL-1)th position
    while (p->next != NULL){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// case 4: insert after node
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data){
    // new node which u want to insert
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;

    printf("Linked list traversal: ");
    LinkedListTraversal(head);

    // case 1:
    // printf("\nInsert in the beginning: ");
    // // becoz this function is returning a new head
    // head = insertInTheBeginning(head, 6);
    // LinkedListTraversal(head);

    // case 2:
    // printf("\nInsert in between: ");
    // // becoz this function is returning a new head
    // head = insertAtIndex(head, 7,2);
    // LinkedListTraversal(head);

    // case 3:
    // printf("\nInsert at the end: ");
    // // becoz this function is returning a new head
    // head = insertAtTheEnd(head, 8);
    // LinkedListTraversal(head);

    // case 4:
    printf("\nInserting after a node: ");
    // becoz this function is returning a new head
    head = insertAfterNode(head, second, 9);
    LinkedListTraversal(head);

    return 0;
}