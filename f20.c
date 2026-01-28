#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=(n*(n+1)*(2*n+1))/6;
    }
    printf("%d",sum);
    return 0;
}