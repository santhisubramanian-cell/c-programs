#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    while(i<j){
        while(a[i]>0 && i<j){
            i++;
        }
        while(a[j]<0 && i<j){
            j--;
        }
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}