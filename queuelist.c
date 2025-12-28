#include <stdio.h>     //uploaded
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear  = NULL;

// 1. ENQUEUE (Insert)
void enqueue(int x) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = NULL;

    if(front == NULL) {     // first element
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = rear->next;
    }
}

// 2. DEQUEUE (Delete)
void dequeue() {
    struct node *temp;

    if(front == NULL) {
        printf("Queue is empty, cannot delete\n");
        return;
    }

    temp = front;
    front = front->next;
    free(temp);

    if(front == NULL) {     // queue becomes empty
        rear = NULL;
    }
}

// 3. DISPLAY
void display() {
    struct node *temp = front;

    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// 4. IS EMPTY
void isempty() {
    if(front == NULL)
        printf("Queue is empty\n");
    else
        printf("Queue is not empty\n");
}

int main() {
    enqueue(4);
    enqueue(8);
    enqueue(22);
    display();

    enqueue(40);
    printf("After insertion:\n");
    display();

    dequeue();
    printf("After deletion:\n");
    display();
    isempty();

    return 0;
}
