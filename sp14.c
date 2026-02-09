#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",str);
    char str1[200];
    int i=0;
    while(str[i]!='\0'){
       str1[i]=str[i];
       i++;
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;
}