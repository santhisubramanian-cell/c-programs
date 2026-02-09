#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%s",str);
    int i=0;
    int j=strlen(str)-1;
    char rev[200];
    for(int i=j;i>=0;i--){
       rev[j-i]=str[i];
    }
    rev[j+1]='\0';
    if(strcmp(rev,str)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}