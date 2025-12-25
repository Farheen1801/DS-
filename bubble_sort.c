#include<stdio.h>

void bubble_sort(int arr[],int n){
          int i,j;
          for(j=0;j<n-1;j++){
            int flag=0;
          for(i=0;i<n-j-1;i++){
            if( arr[i]>arr[i+1]){
                flag=1;
                int temp;
                temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
           }
             if(!flag)
            break;
        }
        printf("sorted array is: ");
         
        for(i=0;i<n;i++){
         printf("%d ", arr[i]);
           }
          }

int main(){
int n,i;
int arr[30];
printf("enter number of elements: ");
scanf("%d",&n);
printf("enter elements: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf(" unsorted array : ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf(" ");
bubble_sort(arr,n);
}