#include<stdio.h>
int arms(int num){
    int sum=0;
    while(num!=0){
        int digit=num%10;
        sum=sum+digit*digit*digit;
        num/=10;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int temp=num;
    int res=arms(num);
    if(temp==res){
        printf("Armstrong");
    }
    else{
        printf("not Armstrong");
    }
    return 0;
}