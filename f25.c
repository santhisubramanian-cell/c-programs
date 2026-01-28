#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int check = n;
    for(n;n!=0;n/=10){
        int digit = n%10;
        sum = sum + (digit*digit*digit);
    }
    if(check == sum){
        printf("Armstrong");
    }
    else{
        printf("Not a Armstrong");
    }

    return 0;
}