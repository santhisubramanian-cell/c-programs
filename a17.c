#include<stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size;i++){
        scanf("%d", &arr[i]);
    }
    int left = arr[0];
    int right =arr[size - 1] ;
    while(left < right){
        if(left!=right){
            printf("no");
        }
        else{
            printf("yes");
        }
        left++;
        right--;
        
    }
    
    return 0;

}


   

