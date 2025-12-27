#include<stdio.h>
//1. create and display stack:
 void displaystack(int stack[],int top){
    int i;
   printf(" \nstack is: ");
  for(i=0;i<=top;i++){
    printf("%d ",stack[i]);
  }
}
//2. stack is empty:
 void isempty(int top){
if(top==-1)
printf("stack is empty\n");
else
printf("stack is not empty\n");
}
//3. stack is full:
void isfull(int top,int n){
  if(top==n-1)
  printf("stack is full\n");
  else
  printf("stack is not full\n");
}
//4. add elements:
void push(int x,int *top,int stack[]){
   (*top)++;
   stack[*top]=x;
}
//5. delete element:
void pop(int *top){
  (*top)--;
}
//6. check topmost element:
void peek(int top,int stack[]){
  printf("\nthe topmost element of stack is %d",stack[top]);
}
int main(){
int stack[10],top,n;
top=-1;
n= sizeof(stack)/sizeof(stack[0]);
push(11,&top,stack);
push(16,&top,stack);
push(10,&top,stack);   
printf("\n");     
displaystack(stack,top);  
isempty(top);
isfull(top,n);
push(30,&top,stack);
displaystack(stack,top); 
pop(&top);
displaystack(stack,top); 
peek(top,stack);
}