// doubly linked list insertion :
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node *next;
};
//creating doubly linked list 
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
//traversal of doubly linked list :

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
//1. insertion at start:
 struct node* insert_start(struct node*head){
    struct node* temp,*newnode;
    int data;
    temp=head;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("entre data of newnode: ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->prev=NULL;
    head=newnode;
    newnode->next=temp;
    temp->prev=newnode;
    return head;
 }
 //2. insert in end:
  struct node* insert_end(struct node*head){
    struct node* temp,*newnode;
    int data;
    temp=head;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("entre data of newnode at end : ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
 }
 //3. insert at index:
  struct node* insert_index(struct node*head){
    struct node* temp,*newnode;
    int data,pos,i;
    temp=head;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("entre data of newnode at any index : ");
    scanf("%d",&data);
   newnode->data=data;
    printf("insert index of node ");
    scanf("%d",&pos);
    for( i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
     newnode->prev=temp;
     temp->next->prev=newnode;
     temp->next=newnode;
      return head;
 }
 
int main(){
    int n,nodes;
    struct node * head;
    printf("entre total number of nodes: ");
    scanf("%d",&n);
   head=createlist(n);
   printf("doubly linled list:\n");
   traverse(head);
   head=insert_start(head);
    printf("doubly linled list after insertion at start:\n");
   traverse(head);
   head=insert_end(head);
     printf("doubly linled list after insertion at end:\n");
   traverse(head);
     head=insert_index(head);
     printf("doubly linled list after insertion at index:\n");
   traverse(head);
return 0;
   }