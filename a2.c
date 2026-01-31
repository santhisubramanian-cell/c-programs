#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int count=0;
    for(int j=0;j<size;j++){
        if(arr[j]==x){
            count+=1;
        }
        else{
            count=0;
            
        }
    }
    printf("Frequency count: %d",count);
    return 0;
}