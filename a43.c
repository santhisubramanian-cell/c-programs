#include<stdio.h>
int main(){
    int n,pos,ele;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&ele);
    pos--;
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=ele;
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}