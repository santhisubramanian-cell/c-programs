#include<stdio.h>
int perfect(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int temp=num;
    int res=perfect(num);
    if(temp==res){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
    return 0;
}