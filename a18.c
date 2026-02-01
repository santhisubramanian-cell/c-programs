#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count1=1;
    int count2=1;
    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1]){
            count1++;
        }
        else{
            count1=1;
        }
        if(count1>count2){
            count2=count1;
        }
    }
    printf("%d",count2);
    return 0;
}