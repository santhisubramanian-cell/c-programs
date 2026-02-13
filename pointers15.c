#include<stdio.h>
int wordcount(char *str){
    int count=0;
    int word=0;
    while(*str!='\0'){
        if(*str!=' ' && word==0){
            word=1;
            count++;
        }
        else if(*str==' '){
            word=0;
        }
        str++;
    }
    return count;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);

    int res = wordcount(str);
    printf("%d",res);
    return 0;
}