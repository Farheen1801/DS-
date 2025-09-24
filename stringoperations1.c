// string operations traverse, length,reverse,copy:
#include<stdio.h>
#include<string.h>
// 1.traverse of string:
void traverse(char str[]){
for(int i=0;str[i]!='\0';i++){
    printf("%c",str[i]);
}
}
// 2.length of string:
int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
// 3.reverse of string:
void reverse(char str[]){
  int i,count=0;
  for(i=0;str[i]!='\0';i++){
    count++;
  }
  for(int i=count-1;i>=0;i--){
    printf("%c",str[i]);
  }
}
// 4. string copy:
void copy(char str[],char str2[]){
  int  i;
    for(i=0;str[i]!='\0';i++){
    str2[i]=str[i];
    }
    str2[i]='\0';
    printf(" new string is :%s",str2);
    } 


int main(){
char str[100],str2[100];
printf("entre name of string:");
scanf("%s",str);
printf("string displayed directly is :%s\n");
//1.traverse string:
printf("string after traverse: ");
traverse(str);
printf("\n");
//2. length of string:
int len=length(str);
printf("length of string is :%d",len);
printf("\n");
//3. reverse of string:
printf("reverse of string is:");
reverse(str);
//4. string copy:
printf("\n");
copy(str,str2);
// using library functions:
printf("\noperations by library functions:\n");
printf("length of string is %d\n",strlen(str));
printf("reverse of string is %s",strrev(str));
 

}