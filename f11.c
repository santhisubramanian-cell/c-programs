#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(n;n!=0;n/=10){
        int digit = n%10;
        sum=sum+digit;
    }
    printf("%d",sum);
    return 0;
}
