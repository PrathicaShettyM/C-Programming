// all 4 cases of deletion are covered
// note pointer can be compared only with pointer
// when u r comparing "ptr with null" use while loop
// when u r comparing "ptr with value" use for loop
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
// case1: delete the 1st node
struct Node* deleteFirst(struct Node* head){
    struct Node* p = head;
    head = head->next;
    free(p);
    return head;
}
// case2: delete the element at the given index
struct Node* deleteAtIndex(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q = head->next;

    for(int i = 0; i < index-1; i++){
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}
// case 3: delete at the end
struct Node* deleteAtEnd(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}
// case 4: delete the 1st node with the value
struct Node* deleteNodeWithValue(struct Node* head, int value){
    struct Node* p = head;
    struct Node* q = head->next;

    // while(q->data != value && q->next!=NULL){
    //  p = p->next;
    //  q = q->next;
    //}
    for(int i = 0; i < value-1; i++){
        p = p->next;
        q = q->next;
    }

    if(q->data == value){   // if the value is found then only delete it
        p->next = q->next;
        free(q);
    }
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

    printf("Linked list before deletion: ");
    LinkedListTraversal(head);

    // head = deleteFirst(head);
    // case 1
    // printf("\nLinked List after deletion: ");
    // LinkedListTraversal(head);

    //case 2
    // head = deleteAtIndex(head, 2);
    // printf("\nLinked List after deletion: ");
    // LinkedListTraversal(head);

    //case 3
    // head = deleteAtEnd(head);
    // printf("\nLinked List after deletion: ");
    // LinkedListTraversal(head);

    //case 4
    head = deleteNodeWithValue(head, 1);
    printf("\nLinked List after deletion: ");
    LinkedListTraversal(head);
    return 0;
}