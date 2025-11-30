// tower of hanoi:
#include<stdio.h>
void tower_of_hanoi(int n,char source,char destination,char auxillary){
    if(n==1){
        printf("move disk 1 from %c to %c\n",source,destination);
        return;
    }
    tower_of_hanoi(n-1,source,auxillary,destination);
    printf("move disk %d from %c to %c\n",n,source,destination);
    tower_of_hanoi(n-1,auxillary,destination,source);
}
int main(){
int n;
char A='A',B='B',C='C';
printf("entre number of disks:");
scanf("%d",&n);
tower_of_hanoi(n,A,C,B);
}
 