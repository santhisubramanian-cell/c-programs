#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    int max=*p;
    for(;p<a+n;p++){
        if(*p>max){
            max=*p;
        }
    }
    printf("%d",max);
    return 0;
    
}