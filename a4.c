
#include<stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = size - 1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for(int k = 0; k < size; k++){
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}
