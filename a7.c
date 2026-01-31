#include<stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for(int j = 0; j < size; j++) {
        if(arr[j] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count); 

    return 0;
}
