#include<stdio.h>
int sum(int num){
    int sumdigit=0;
    for(int i=1;i<=num;i++){
        sumdigit=sumdigit+i;
    }
    return sumdigit;
}
int main(){
    int num;
    scanf("%d",&num);
    int res=sum(num);
    printf("%d",res);
    return 0;
}