#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n+n];
    printf("enter array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter array b:");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
       c[i] = a[i];
    }
    for(int i=0;i<n;i++){
        c[i+n]=b[i];
    }
    for(int i=0;i<n+n;i++){
        int j;
        for(j=0;j<i;j++){
            if(c[i]==c[j]){
                break;
            }
        }
        if(j==i){
            printf("%d ",c[i]);
        }
    }

    return 0;
}