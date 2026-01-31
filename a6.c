#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(j==i){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}