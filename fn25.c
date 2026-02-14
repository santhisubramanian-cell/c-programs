#include<stdio.h>
int avg(int a, int b, int c){
    int total=a+b+c;
    int average=total/3;
    return average;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int res = avg(a,b,c);
    printf("AVG: %d",res);
    return 0;
}