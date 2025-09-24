// insert sub string:
#include<stdio.h>
int main(){
    char str1[50],str2[50],str3[100];
    int i=0,j=0,k=0,pos;
    printf("entre main string:");
    scanf("%s",&str1);
    printf("entre string to be inserted:");
    scanf("%s",&str2);
    printf("entre position to insert string:");
    scanf("%d",&pos);
    pos=pos-1;
    for(i=0;i<pos;i++){
        str3[k]=str1[i];
        k++;
    }
    for(j=0;str2[j]!='\0';j++){
        str3[k]=str2[j];
        k++;
    }
    for(i=pos;str1[i]!='\0';i++){
        str3[k]=str1[i];
        k++;
    }
    str3[k]='\0';
    printf("the resultant string is %s",str3);
    return 0;
}