#include<stdio.h>
int main(){
    char s1[100],s2[100];
    scanf("%s %s",&s1,&s2);
    char *p=s1;
    char *q=s2;
    int i=0,j=0;
    while(*(p+i)!='\0'){
        i++;
    }
    while(*(q+j)!='\0'){
        *(p+i)=*(q+j);
        i++;
        j++;
    }
    *(p+i)='\0';
    printf("%s",s1);
    return 0;
}