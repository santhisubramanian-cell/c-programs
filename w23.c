#include <stdio.h>
int main() {
    int n, vibration, count = 0, breakdownAt = -1;
    int i = 1;

    scanf("%d", &n);
    while (i <= n) {
        scanf("%d", &vibration);

        if (vibration > 70) {
            count++;
            if (breakdownAt == -1) {
                breakdownAt = i;
            }
        }
        i++;
    }
    if (breakdownAt != -1) {
        printf("Breakdown At Reading: %d\n", breakdownAt);
    } else {
        printf("Breakdown At Reading: Not Occurred\n");
    }
    printf("Unsafe Readings: %d\n", count);

    return 0;
}
