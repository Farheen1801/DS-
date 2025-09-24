// string operations using pointers
#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    char *p,*q;
    int i,count=0;
    printf("entre string: ");
    scanf("%s",str);
    p=&str[0];
    q=p;
   // 1.traverse and 2. length:
    while(*p!='\0'){
        printf("%c",*p);
        count++;
        p++;
    }
   int len= strlen(str);
   printf("\nlength of string is %d\n",count);
   printf("length of string by library function is %d\n",len);
   //3. reverse using length;
   for(i=count-1;i>=0;i--){
    printf("%c",*p);
    p--;
   }
   *p=str[0];
   printf("%c",*p);
   printf("\n");
   //4. reverse using 2 pointers:
   printf("reverse using two pointers : ");
while(*q!='\0'){
q++;
}
q--;
while(q!=p){
    printf("%c",*q);
q--;
}
   *q=str[0];
   printf("%c",*q);
}