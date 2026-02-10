#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d %d",&n,&n1);
    int a[n],a1[n1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            if(a[i]==a1[j]){
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}