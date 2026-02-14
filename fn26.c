#include<stdio.h>
int elements(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int res = elements(a,s);
    printf("Sum %d",res);

    return 0;
}