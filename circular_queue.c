#include <stdio.h>         // uploaded 

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// 1. ENQUEUE
void enqueue(int x) {
    if (front == (rear + 1) % SIZE) {
        printf("Queue is FULL\n");
        return;
    }

    if (front == -1) {          // first insertion
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = x;
}

// 2. DEQUEUE
void dequeue() {
    if (front == -1) {
        printf("Queue is EMPTY\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);

    if (front == rear) {        // only one element
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

//3. display 
 void display() {
    int i;

    if (front == -1) {
        printf("Queue is EMPTY\n");
        return;
    }

    printf("Queue elements:\n");

    for (i = front; i != rear; i = (i + 1) % SIZE) {
        printf("%d ", queue[i]);
    }

    // print rear element separately
    printf("%d\n", queue[rear]);
}

// 4. IS EMPTY
void isempty() {
    if (front == -1)
        printf("Queue is EMPTY\n");
    else
        printf("Queue is NOT EMPTY\n");
}

// 5. IS FULL
void isfull() {
    if (front == (rear + 1) % SIZE)
        printf("Queue is FULL\n");
    else
        printf("Queue is NOT FULL\n");
}

// MAIN
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();

    dequeue();
    dequeue();
    display();

    enqueue(50);
    enqueue(60);
    display();

    isfull();
    isempty();

    return 0;
}
