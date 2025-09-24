#include<stdio.h>
// function for printing array:
void print(int arr[],int n){                      
printf("elemnts of array are:\n");
    for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
    }
    printf("\n");
}

// function for minimum of array:
int min(int arr[],int n){                           
    int min=arr[0];
    for(int i=1;i<n;i++)                            
    {
    if(min>arr[i]){                              
        min=arr[i];
    }
}
return min;
}

// function for max of array:
int max(int arr[],int n){
int max=arr[0];                          
    for(int i=0;i<n;i++){          
    if(max<arr[i]){
        max=arr[i];
    }
    }
    return max;
}
// function for linear search:
void linear(int arr[],int n){
    int num,found=0;
    printf("entre element to be seacrched:");
   scanf("%d",&num); 
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            found=1;
            printf("number is found at position %d\n",i+1) ;                     
             }   
        }
              if(found==0)  {
                printf("NOT FOUND");
              }
    
}
int main(){
    int i,num,n,arr[50];
    printf("entre number of elements for array:");
    scanf("%d",&n);
    printf("entre of elements for array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
       print(arr,n);                       
      int maximum=max(arr,n);            
      int minimum=min(arr,n);            
   printf("maximum of array is %d\n",maximum);
   printf("minimum of array is %d\n",minimum);   
      linear(arr,n); 
                                
      return 0;
        }
        
    
        
    