#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top=NULL;
//1. insertion of stack:
void push(int data){
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=top;
top=newnode;
}
//2. deletion of stack:
void pop(){
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);

}
//3. traversal of stack:
void display(){
struct node* temp;
if(top==NULL){
    printf("List is empty");
}
else{
    temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
}
//4. empty check:
void isempty(){
    if(top==NULL){
        printf("stack is empty\n");
    }
}
int main(){
 push(30);
 push(20);
 display();
 pop();
 display();
 isempty();
 pop();
 isempty();
 push(11);
 push(23);
 display();
}