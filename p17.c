#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int n=1;n<=4-i;n++){
            printf(" ");
        }
        char ch = 'A';
        for(int j=1;j<=2*i-1;j++){
            printf("%c",ch);
            ch++;
        }
        
        printf("\n");
        
        
        
    }
    return 0;
}