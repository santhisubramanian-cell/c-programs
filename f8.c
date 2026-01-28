#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    for(n;n!=0;n/=10){
        int digit = n%10;
        rev = rev * 10 + digit;
    }
    printf("%d ",rev);
    return 0;
}