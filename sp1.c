#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",&str);
    int count=0,i=0;
    while (str[i]!='\0')
    {
        if(str[i]>='a' || str[i]<='z' || str[i]>='A' || str[i]<='Z' || str[i]>='1' || str[i]<='9' || str[i]=='_'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}