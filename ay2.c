#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=k;i>=0;i--){
        int temp=a[0];
        for(int j=0;j<s;j++){
            a[j]=a[j+1];
        }
        a[s-1]=temp;
    }
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }

    return 0;
}