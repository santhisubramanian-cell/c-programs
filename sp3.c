#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='@'){
            break;
        }
        printf("%c",str[i]);
    }
    
    return 0;
}