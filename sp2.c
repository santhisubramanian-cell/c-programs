#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",&str);
    int i=0,flag=0;
    while (str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z' ){
            flag=1;
            break;
        }
        
        i++;
    }
    if(flag){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;
}