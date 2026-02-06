#include<stdio.h>
int main(){
    int n,total=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        total= (n*(n+1))/2;
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
    }
    int final=total-sum;
    printf("%d",final);
    return 0;
}