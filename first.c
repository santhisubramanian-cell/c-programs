#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("%d is Positive",a);
    }
    else if(a<0){
        printf("%d is Negative",a);
    }
    else{
        printf("%d is zero",a);
    }
    return 0;
}