#include <stdio.h>
int main() {
    int capacity, n, load;
    int safeHours = 0;
    int failureCount = 0;
    int i = 0;
    scanf("%d %d", &capacity, &n) ;
    while (i < n) {
        scanf("%d", &load);
        if (load <= capacity) {
            safeHours++;
        } else {
            failureCount++;
        }
        i++;
    }

    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d\n", failureCount);

    return 0;
}
