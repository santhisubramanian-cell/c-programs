#include<stdio.h>
int main() {
    int size;
    scanf("%d", &size); 
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); 
    }
    int k;
    scanf("%d", &k); 
    k = k % size;
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) { 
            arr[j] = arr[j + 1];
        }    
        arr[size - 1] = temp;
    }   
    for (int p = 0; p < size; p++) {
        printf("%d ", arr[p]);
    }

    return 0;
}
