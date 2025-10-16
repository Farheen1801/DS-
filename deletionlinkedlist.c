
// linked list using mallac creation and traverse:
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
// creating linked list 
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
// traversal of linked list:
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
//1. deletion at start:
struct node* deletestart(struct node* head){
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
    return head;
}
//2.deletion at end:

 struct node* delete_end(struct node * head){
             struct node*temp;
             temp=head;
             if(head->next==NULL){
                free(head);
                printf("empty ");
                return;
             }
             while(temp->next->next!=NULL){
                temp=temp-> next;
             }
             free(temp->next);
             temp->next=NULL;
             return head;
 }
 struct node* delete_end2(struct node * head){
             struct node*temp,*prev;
             prev=head;
             temp=prev->next;
             if(head->next==NULL){
                free(head);
                printf("empty ");
                return;
             }
             while(temp->next!=NULL){
                temp=temp-> next;
                prev=prev->next;
             }
             free(temp);
             prev->next=NULL;
             return head;
 }
//3. deletion at any index:
struct node* delete_index(struct node* head){
    struct node* temp,*prev;
    int i,index;
    prev=head;
temp=head->next;
printf("entre index of node to be deleted: ");
scanf("%d",&index);
for(i=1;i<index-1;i++){
    temp=temp->next;
    prev=prev->next;
}
prev->next=temp->next;
free(temp);
return head;
}
int main(){
    int n;
    struct node * head;
    printf("entre total number of nodes: ");
    scanf("%d",&n);
   head=createlist(n);
   printf("link before deletion:\n");
   traverse(head);
   head= deletestart(head);
    printf("link after 1st node deletion:\n");
    traverse(head);
    head=delete_end(head);
      printf("link after last node deletion using 1 pointer:\n");
    traverse(head);
    head=delete_end2(head);
      printf("link after last node deletion using 2 pointers:\n");
    traverse(head);
        head=delete_index(head);
      printf("link after deletion at any index:\n");
    traverse(head);
   return 0;

}