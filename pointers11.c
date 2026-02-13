#include<stdio.h>

int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int *start=a;
    int *end=a+s-1;
    while(*start<*end){
        int temp=*start;
        *start=*end;
        *end=temp;
        *start++;
        *end--;
    }
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    return 0;
}