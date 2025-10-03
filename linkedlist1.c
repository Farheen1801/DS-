// data of students in linked list:
#include<stdio.h>
struct node{
int age;
int roll_no;
char name[30];
struct node*next;
};

int main(){
int n,i;
struct node student[50];
printf("entre number of students:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("entre details of student %d; roll no.,name,age\n",i+1);
scanf("%d %s %d",&student[i].roll_no,&student[i].name,&student[i].age);
if(i==n-1){
    student[i].next=NULL;
}
else{
    student[i].next=&student[i+1];
}
}
struct node*h;
h=&student[0];
// display of elements using pointer:
struct node*p;
p=h;
printf("student details are:\n");
while(p!=NULL){
    printf("%d %s %d \n",p->roll_no,p->name,p->age);
    p=p->next;
}
return 0;
}