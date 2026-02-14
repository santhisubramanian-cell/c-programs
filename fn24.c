#include<stdio.h>
int largest(int a, int b,int c){
    if(a>b && a>c){
        return a;
    }
    if(b>a && b>c){
        return b;
    }
    if(c>a && c<b){
        return c;
    }
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int res = largest(a,b,c);
    printf("%d is greater than",res);
    return 0;
}