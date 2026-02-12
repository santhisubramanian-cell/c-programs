#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);
    int *p=a;
    for(int i=index;i<size;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}