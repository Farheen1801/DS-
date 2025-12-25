// singly linked list insertion:
#include<stdio.h>                      //uploaded
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node* create(int n){
    int data,i;
    struct node*newnode,*temp,*head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data of 1st node: ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    temp=newnode;
    head=newnode;
    for(i=2;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data of %d node: ",i);
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;
    }
    return head;
}
void display(struct node*head){
   struct node*temp;
   temp=head;
   while(temp!=NULL){
    printf("%d  ",temp->data);
    temp=temp->next;
   }
}
//1. insert at start:
   struct node* insert_start(struct node*head,int data){
            struct node*newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=data;
            newnode->next=head;
            head=newnode;
            return head;
   }
   //2. insert at end:
   struct node* insert_end(struct node*head,int data){
            struct node*newnode,*temp;
            newnode=(struct node*)malloc(sizeof(struct node));
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->data=data;
            newnode->next= NULL;
        return head;
   }
   //3. insert at any point:
   struct node* insert_pos(struct node*head,int data){
            int pos,i;
            struct node*newnode,*temp;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=data;
            newnode->next= NULL;
            temp=head;
            printf("\nenter position to enter new node");
            scanf("%d",&pos);
            for(i=1;i<pos-1;i++){
                temp=temp->next;
            }
            newnode->next= temp->next;
            temp->next= newnode;
          
        return head;
   }

int main(){
  int n,data;
  struct node*head;
  printf("enter number of nodes ");
  scanf("%d",&n);
  head=create(n);
   printf("linked list:\n ");
  display(head);
  printf("\nenter data to add at start: ");
  scanf("%d",&data);
  head=insert_start(head,data);
   printf("\nlinked list after insertion at start :\n ");
  display(head);
  printf("\nenter data to add at end: ");
  scanf("%d",&data);
  head=insert_end(head,data);
  printf("\nlinked list after insertion at end :\n ");
  display(head);
  printf("\nenter data to add at position: ");
  scanf("%d",&data);
  head=insert_pos(head,data);
  printf("\nlinked list after insertion at any index:\n ");
  display(head);
  
}


// singly linked list insertion:

