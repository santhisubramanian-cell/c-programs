#include<stdio.h>
int lcm(int n1,int n2){
    int gcd;
    for(int i=1;i<=n1 && i<=n2;++i){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res = lcm(a,b);
    int lcmnumnber=a*b/res;
    printf("%d",lcmnumnber);
    return 0;
}