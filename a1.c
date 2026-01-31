#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int first=arr[0];
    int second = arr[0];

    for(int j=0;j<size;j++){
        if(arr[j]>first){
            second=first;
            first=arr[j];
        }
        else if(arr[j]>second && arr[j]!=first){
            second=arr[j];
        }
    }
    printf("Second Largest: %d",second);

    return 0;
}