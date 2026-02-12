#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",&str);
    char *p = str;
    int index=0;
    while(*p!='\0'){
        if(index%2==1){
            *p='*';
        }
        index++;
        *p++;
    }
    printf("%s",str);
    return 0;
}