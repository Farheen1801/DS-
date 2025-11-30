#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node* right;
};
//1. create node:
struct node* create_node(int data){
    struct node*newnode=(struct node*)malloc (sizeof(struct node));
    newnode->data=data;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}
//2. insert nodes to form bst:
struct node* insert(struct node *root, int data){
    if(root==NULL)
    return create_node(data);
if(data>root->data)
root->right=insert(root->right,data);
else if(data<root->data)
root->left=insert(root->left,data);
return root;
}
//3. inorder traversal:
void inorder (struct node *root ){
if ( root ==NULL)
return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
//4. pre_order traversal:
void pre_order(struct node*root){
       if(root==NULL)
       return;
        printf("%d ",root->data);
        pre_order(root->left);
       pre_order(root->right);
}
//5. post_order traversal:
void post_order(struct node*root){
       if(root==NULL)
       return;
       post_order(root->left);
       post_order(root->right);
       printf("%d ",root->data);
}
int main(){
int n,data,i;
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
    printf("\npre order traversal \n");
    pre_order(root);
    printf("\npost order traversal \n");
    post_order(root);
      return 0;
}
