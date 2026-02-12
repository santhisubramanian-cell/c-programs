#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=*(p+i);
    }
    printf("%d",sum);
    return 0;
}