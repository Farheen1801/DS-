 
#include <stdio.h>   // uplaoded
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
 
 //1. creating doubly linked list 
struct node* createlist(int n){
    struct node* newNode,*header,*temp;
    int data,i;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Unable to provide memory");
    }
    else{
        printf("entre data of 1st node: ");
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        newNode->prev=NULL;
        header=newNode;
        temp=newNode;
        for(i=2;i<=n;i++){
        newNode=(struct node*)malloc(sizeof(struct node));
         printf("entre data of node %d: ",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        newNode->prev=temp;
        temp->next=newNode;
        temp=temp->next;
        }
        
    }
    return header;
}

/* Display list */
void display(struct node *head) {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Delete at start */
struct node* deleteStart(struct node *head) {
    struct node *temp;

    if (head == NULL)
        return NULL;

    temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
    return head;
}

/* Delete at end */
struct node* deleteEnd(struct node *head) {
    struct node *temp;

    if (head == NULL)
        return NULL;

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    free(temp);
    return head;
}

/* Delete at any position */
struct node* deleteAtPosition(struct node *head, int pos) {
    struct node *temp = head;

    if (head == NULL)
        return head;

    if (pos == 1)
        return deleteStart(head);

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
        return head;

    temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return head;
}

  
 

int main() {
    struct node *head;
    int n, pos, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createList(n);
    display(head);

    head = deleteStart(head);
    display(head);

    head = deleteEnd(head);
    display(head);

    printf("Enter position to delete: ");
    scanf("%d", &pos);
    head = deleteAtPosition(head, pos);
    display(head);

    printf("Enter value to delete: ");
    scanf("%d", &value);
    head = deleteByValue(head, value);
    display(head);

    return 0;
}

