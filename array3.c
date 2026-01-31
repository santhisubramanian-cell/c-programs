#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int is_increasing = 1;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < size - 1; j++) {
        if (arr[j] > arr[j+1]) {
            is_increasing = 0;
            break; 
        }
    }
    if (is_increasing) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
