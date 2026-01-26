#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=10 && num<=20){
        printf("Number with in a range");
    }
    else{
        printf("Number not in a range");
    }
    return 0;
}