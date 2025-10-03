// linked list using mallac creation and traverse:
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
//1. creating linked list 
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
        header=newNode;
        temp=newNode;
        for(i=2;i<=n;i++){
        newNode=(struct node*)malloc(sizeof(struct node));
         printf("entre data of node %d: ",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;
        }
        
    }
    return header;
}
//2. traversal of linked list:
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
//3. no. of nodes in linked list:
int count(struct node*header){
    int count=0;
struct node*temp;
temp=header;
while(temp!=NULL){
count++;
temp=temp->next;
}
return count;
}
int main(){
    int n,nodes;
    struct node * head;
    printf("entre total number of nodes: ");
    scanf("%d",&n);
   head=createlist(n);
   traverse(head);
   nodes=count(head);
   printf("number of nodes are %d",nodes);
   return 0;
}