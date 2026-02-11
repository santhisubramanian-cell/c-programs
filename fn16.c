#include<stdio.h>
void result(int num){
    int a=0;
    int b=1;
    int c=a+b;
    printf("%d %d ",a,b);
    for(int i=3;i<=num;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
int main(){
    int num;
    scanf("%d",&num);
    result(num);
    return 0;
}