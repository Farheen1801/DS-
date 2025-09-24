#include<stdio.h>
int main(){
    int i, ispalindrome=1;
    char str[100];
    char *p,*q;
    printf("entre string: ");
    scanf("%s",str);
    p=&str[0];
    q=p;
    while(*q!='\0'){
q++;
}
q--;
while(p<q){
if(*p!=*q){
    ispalindrome=0;
}
p++;
q--;
}
if(ispalindrome==0){
    printf("word is not palindrome");
}
else{
    printf("word is palindrome");
}
}