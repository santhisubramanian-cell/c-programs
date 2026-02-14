#include<stdio.h>
int natural(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int num;
    scanf("%d",&num);
    int sum=natural(num);
    printf("%d",sum);
    return 0;
}