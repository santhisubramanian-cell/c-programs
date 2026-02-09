#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%s",&str);
    int i;
    int j=strlen(str)-1;
    for(int i=j;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}