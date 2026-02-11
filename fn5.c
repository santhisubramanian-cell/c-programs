#include<stdio.h>
int digit(int a){
    int sum=0;
    while(a!=0){
        int digits=a%10;
        sum=sum+digits;
        a/=10;
    }
    return sum;

}
int main(){
    int a;
    scanf("%d",&a);
    int sum=digit(a);
    printf("%d",sum);
    return 0;
}