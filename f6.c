#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial: %d",fact);
    return 0;
}