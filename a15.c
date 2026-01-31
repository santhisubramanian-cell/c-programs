#include <stdio.h>
void moveCancelledToEnd(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }
}
int main() {
    int arr1[] = {0, 1, 0, 3, 0};
    int n1 = 5;
    moveCancelledToEnd(arr1, n1);
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    int arr2[] = {1, 2, 3};
    int n2 = 3;
    moveCancelledToEnd(arr2, n2);
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    int arr3[] = {0, 0, 5, 6};
    int n3 = 4;
    moveCancelledToEnd(arr3, n3);
    for (int i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}
