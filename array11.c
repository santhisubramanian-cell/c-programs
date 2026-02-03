#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int sortedRowsCount = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        int isSorted = 1;
        for (int j = 0; j < c - 1; j++) {
            if (matrix[i][j] > matrix[i][j + 1]) {
                isSorted = 0; 
                break;
            }
        }
        if (isSorted) {
            sortedRowsCount++;
        }
    }
    printf("%d\n", sortedRowsCount);

    return 0;
}
