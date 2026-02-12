#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    int *p=a;
    for(int i=0;i<s;i++){
        if(*(p+i)>=50){
            break;
        }
        sum+=*(p+i);
    }
    printf("%d",sum);
    return 0;
}