#include<stdio.h>
int main(){
    int mul;
    scanf("%d",&mul);
    if(mul%3==0 && mul%7==0){
        printf("%d is multiple both 3 and 7",mul);
    }
    else{
        printf("not multiple");
    }
    return 0;
}