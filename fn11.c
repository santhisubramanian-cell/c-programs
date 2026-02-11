#include<stdio.h>
int number(int num){
    int count=0;
    while (num!=0)
    {
        int digit=num%10;
        count++;
        num/=10;
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    int res = number(num);
    printf("%d",res);
    return 0;
}