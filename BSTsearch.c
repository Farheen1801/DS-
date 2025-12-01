#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node* right;
};
 
struct node* create_node(int data){
    struct node*newnode=(struct node*)malloc (sizeof(struct node));
    newnode->data=data;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}
struct node* insert(struct node *root, int data){
    if(root==NULL)
    return create_node(data);
if(data>root->data)
root->right=insert(root->right,data);
else if(data<root->data)
root->left=insert(root->left,data);
return root;
}
 
void inorder (struct node *root ){
if ( root ==NULL)
return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
} 
 // searching:
 struct node* search(struct node*root,int key,int depth){
    if(root==NULL){
    printf("KEy %d not found ",key);
    return NULL;
    }
    else if(key==root->data){
        printf("key %d found at depth %d",key,depth);
      return root;
    }
    
    else if (key<root->data)
    return search(root->left,key,depth+1);
    else if (key>root->data)
    return search(root-> right,key,depth+1);
 }

int main(){
int n,data,i,key;
int depth=0;
struct node* root=NULL;
printf("entre number of nodes: ");
scanf("%d",&n);
printf("entre values to form BST: ");
for(i=0;i<n;i++){
scanf("%d",&data);
root=insert(root,data);
}
  printf("inorder traversal \n");
    inorder(root);
    struct node *result;
 printf("\nenter number to be searched in BST: ");
 scanf("%d",&key);
 result=search(root,key,depth);
  
      return 0;
}
