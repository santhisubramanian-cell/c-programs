#include<stdio.h>
int main(){
    int b,e;
    long res=1;
    scanf("%d",&b);
    scanf("%d",&e);
    for(int i=1;i<=e;i++){
        res*=b;
    }
    printf("%d",res);
    return 0;
}