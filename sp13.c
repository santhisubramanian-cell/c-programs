#include<stdio.h>
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int count;
    char ch;
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
             printf("%d",i);
            break;
        }
       
    }
    
    
        
    return 0;
}