#include<stdio.h>
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    if(str[0]!='\n'){
        count=count+1;
    }
    printf("%d",count);
    return 0;
}