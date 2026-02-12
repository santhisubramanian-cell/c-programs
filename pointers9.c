#include<stdio.h>
int main(){
    char str[100],str1[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    char *q=str1;
    int i=0;
    while(*p!='\0'){
        *(q+i)=*(p+i);
        i++;
        *p++;
    }
    *(q+i)='\0';
    printf("%s",str1);
}