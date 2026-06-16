#include<stdio.h>
int power(int base,int expo){
    int result=1;
    for(int i=1;i<=expo;i++){
        result*=base;
    }
    return result;
}
int main(){
    int base,expo;
    scanf("%d %d",&base,&expo);
    int res=power(base,expo);
    printf("%d",res);
    return 0;
}
