#include<stdio.h>
int power(int base,int expo){
    int total=1;
    for(int i=1;i<=expo;i++){
        total*=base;
    }
    return total;
}
int main(){
    int base,expo;
    scanf("%d %d",&base,&expo);
    int res = power(base,expo);
    printf("%d",res);
    return 0;
}