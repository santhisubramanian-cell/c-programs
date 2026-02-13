#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *start=str;
    char *end = str + strlen(str) - 1;
    if(*end=='\n'){
        *end='\0';
        end--;
    }
    int flag=1;
    while(start < end){
        if(*start!=*end){
            flag=0;
            break;
        }
        start++;
        end--;
    }
    if(flag){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}