#include<stdio.h>
int even(int a[],int s){
    int index=0;
    int *p=a;
    for(int i=0;i<s;i++){
        if(i%2==0){
            *(p+i)*=2;
        }
    }
    for(int i=0;i<s;i++){
        printf("%d ",*(p+i));
    }
}



int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    even(a,s);
    return 0;
}