// doubly linked list:
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
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
//2. traversal of doubly linked list forward:

void traverse(struct node* header){
struct node* temp;
if(header==NULL){
    printf("List is empty");
}
else{
    temp=header;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
}
//3. display reverse doubly linked list:
void displayreverse(struct node*head){
struct node* temp;
temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
while(temp!=NULL){
    printf("%d \n",temp->data);
    temp=temp->prev;
}
}
int main(){
    int n,nodes;
    struct node * head;
    printf("entre total number of nodes: ");
    scanf("%d",&n);
   head=createlist(n);
   printf("doubly linled list:\n");
   traverse(head);
    printf("doubly linled list in reverse order\n:");
   displayreverse(head);
return 0;
   }
   
