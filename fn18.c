#include<stdio.h>
int gcd(int n1,int n2){
    int i,gcd_num;
    for(i=1;i<=n1 && i<=n2;++i){
        if(n1%i==0 && n2%i==0){
            gcd_num=i;
        }
    }
    return gcd_num;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res=gcd(a,b);
    printf("%d",res);
    return 0;
}