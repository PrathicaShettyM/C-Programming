#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// function to traverse the LinkedList
void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;// point to next node
    }
}

int main(){
    // create a head node(create an instance of structure)
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // allocate memory dynamically(in heap)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // link the nodes
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

    return 0;
}