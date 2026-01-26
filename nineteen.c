#include<stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch>=0 && ch<=9){
        printf("Digit");
    }
    else{
        printf("not a digit");
    }
    return 0;
}