#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j){
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}