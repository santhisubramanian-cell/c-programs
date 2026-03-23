#include<stdio.h>
int isprime(int num){
    int i=0;
    if(num<=0){
        return 0;
    }
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    scanf("%d",&num);
    if(isprime(num)){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
    return 0;
}
