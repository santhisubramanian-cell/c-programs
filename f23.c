#include<stdio.h>
int main(){
    int n,isprime=1;
    scanf("%d",&n);
    if(n<=1){
        isprime=0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }
    return 0;
}