#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    fgets(s,sizeof(s),stdin);
    int i=0;
    int j=strlen(s)-1;
    int temp;
    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    
    printf("%s",s);
    return 0;
}