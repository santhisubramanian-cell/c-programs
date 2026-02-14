#include<stdio.h>
int largest(int a[],int size){
    int max=a[0];
    for(int i=0;i<size;i++){
        if(a[i]<max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int res = largest(a,s);
    printf("largest: %d",res);
    return 0;
}