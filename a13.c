#include<stdio.h>
int main(){
    int size;
    scanf("%d", &size); 
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int j=0;j<size;j++){
        sum+=arr[j];
    }
    int avg=sum/size;
    int count=0;
    for(int k=0;k<size;k++){
        if(arr[k]>avg){
            count++;
        }
        else{
            count=0;
        }
    }
    printf("%d",count);
    return 0;
    
}