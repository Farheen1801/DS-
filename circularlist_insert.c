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
        newNode->next=newNode;
        header=newNode;
        temp=newNode;
        for(i=2;i<=n;i++){
        newNode=(struct node*)malloc(sizeof(struct node));
         printf("entre data of node %d: ",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=header;
        temp->next=newNode;
        temp=temp->next;
        }
        
    }
    return header;
}
//2. traversal of linked list:
void traverse(struct node* header){
struct node* temp;
     temp=header;
    do{
        printf("%d\n",temp->data);
        temp=temp->next;
    }while( temp!=header);
}
//1. insert at start:
struct node* insert_start(struct node*head){
    struct node*temp,*newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data to be inserted at start:");
    scanf("%d",&data);
    newnode->data=data;
    temp=head;
    while(temp->next!= head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
    return head;
    }
    //2. insert at end:
    struct node*  insert_end(struct node*head){
    struct node*temp,*newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data to be inserted at start:");
    scanf("%d",&data);
    newnode->data=data;
    temp=head;
    while(temp->next!= head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
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
    int n;
    struct node * head;
    printf("entre total number of nodes: ");
    scanf("%d",&n);
   head=createlist(n);
   traverse(head);
    head=insert_start(head);
    printf("\n list after insertion at start:\n");
   traverse(head);
   head= insert_end(head);
    printf("\n list after insertion at  end:\n");
   traverse(head);
   head =insert(head);
    printf("\n list after insertion at   any index:\n");
   traverse(head);

   return 0;
}