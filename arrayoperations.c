// array operations 
#include<stdio.h>
//1.traversal of array:
void traverse(int arr[],int *n){
for(int i=0;i<*n;i++){
    printf("%d  ",arr[i]);
}
}
//2. insert at end of array:
void insertend(int arr[],int* n){
     int x;
    printf("entre element to be inserted at end:");
    scanf("%d",&x);
    arr[*n]=x;
    (*n)++;                            
    for(int i=0;i<*n;i++){               
    printf("%d ",arr[i]);
    }
}
//3. insert at start:
void insertstart(int arr[],int *n){
       int y;
    printf("\nentre element to be added in beginning:");
    scanf("%d",&y);
    for( int i=*n-1;i>=0;i--){     
        arr[i+1]=arr[i];
    }
    arr[0]=y;  
    (*n)++;                         // *n++ is incorrect it increments n and gives value, but we have to increment value 
    for(int i=0;i<*n;i++){          
        printf("%d ",arr[i]);
    }
}
//4. insertion at any place:
void  insertrandom(int arr[],int *n){
      int index,num;
    printf("\n entre index of element added:");
    scanf("%d",&index);
    printf(" entre number to be added:");
    scanf("%d",&num);
    for(int i=*n-1;i>=index;i--){     
        arr[i+1]=arr[i];
}
(*n)++;
arr[index]=num;
for(int i=0;i<*n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
}
//5. deletion at end :
void delend(int arr[],int *n){
    printf("array after last element is deleted:");
(*n)--;
for(int i=0;i<*n;i++){
    printf("%d ",arr[i]);
}
}
//6. deletion at start:
void delstart(int arr[],int *n){
    printf("\narray after first element is deleted:");

for(int i=0;i<*n-1;i++){
    arr[i]=arr[i+1];
}
(*n)--;
for(int i=0;i<*n;i++){
    printf("%d ",arr[i]);
}
}
//7. deletion  at any place by location :
void del1(int arr[],int *n){
         int index;
printf("\nentre index of deleted number:");
scanf("%d",&index);
for(int i=index;i<*n-1;i++){
    arr[i]=arr[i+1];
}
(*n)--;
for(int i=0;i<*n;i++){
    printf("%d ",arr[i]);
}
}
//8. deletion at any place by number:
void del2(int arr[],int *n){
    int num,i,index,flag=0;
    printf("entre number to be deleted:");
    scanf("%d",&num);
    for(i=0;i<*n;i++){
        if(arr[i]==num){
            flag=1;
            index=i;
        }
    }
    if(flag==0){
        printf("not found");
    }
    else{
    for(int i=index;i<*n-1;i++){
    arr[i]=arr[i+1];
}
(*n)--;
for(int i=0;i<*n;i++){
    printf("%d ",arr[i]);
}
} 
}





int main(){
    int arr[30],n;
    printf("entre size of array:");
    scanf("%d",&n);
    printf("entre elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    traverse(arr,&n);                // 1.call for traverse
    printf("\n");
    insertend(arr,&n);               //2. call for insertion at end 
    printf("\n");
    insertstart(arr,&n);             //3. call for insertion in beginning 
    printf("\n");                   
    insertrandom(arr,&n);            //4. insertion at random place 
    delend(arr,&n);                  //5. delete at end 
    printf("\n");
    delstart(arr,&n);               //6. delete at start
    printf("\n");
    del1(arr,&n);                   //7. deletion at any place by location 
    printf("\n");
    del2(arr,&n);                   //8. deletion at any place by number 
return 0;
}