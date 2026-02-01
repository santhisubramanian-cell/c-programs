#include <stdio.h>
#include <stdlib.h>   
int main() {
    int N;
    scanf("%d", &N);
    int temp, closest;
    scanf("%d", &closest);
    for (int i = 1; i < N; i++) {
        scanf("%d", &temp);
        if (abs(temp) < abs(closest)) {
            closest = temp;
        }
        else if (abs(temp) == abs(closest) && temp > closest) {
            closest = temp;
        }
    }
    printf("%d", closest);

    return 0;
}
