#include<stdio.h>
int queue[5];
int front=-1,rear=-1;
//1. INSERTING ELEMENT enqueu:
void enqueu(int x){
    if(front==-1){
        front++;
    }
    rear++;
    queue[rear]=x;
}
//2. DELETING ELEMENT  dequeu:
void dequeu(){
    if(front==-1||front>rear){
        printf("empty queue cant delete\n");
    }
    else{
        front++;
        if(front>rear)
        front=rear==-1;
    }
}
//3. display queue:
void display(){
    int i;
    printf("queue is:\n");
    for(i=front;i<=rear;i++){
         printf("%d ",queue[i]);
         printf("\n");
    }
}
//4. empty queue:
void isempty(){
    
}
int main(){
    enqueu(4);
    enqueu(8);
    enqueu(22);
    display();
    enqueu(40);
    printf( "after insertion ");
    display();
    dequeu();
    printf("after deletion ");
    display();
    return 0;
}