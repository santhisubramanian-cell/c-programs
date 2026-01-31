#include <stdio.h>

int findMissingBySum(int arr[], int size, int N) {
    int expected_sum = N * (N + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }
    return expected_sum - actual_sum;
}
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int N = 6;
    int missingNumber = findMissingBySum(arr, size, N);
    printf("%d", missingNumber);
    return 0;
}
