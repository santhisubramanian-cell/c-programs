#include <stdio.h>

int main() {
    int N;
    (scanf("%d", &N));

    int current, prev;
    int day = 1;
    int crash = -1; 
    int total = 0;

    scanf("%d", &prev);

    int i = 2;
    while (i <= N) {
        scanf("%d", &current);

        if (current < prev) {
            total++;
            if (crash == -1) {
                crash = i;
            }
        }

        prev= current;
        i++;
    }
    printf("Crash Day: %d Total Drops: %d\n", crash, total);

    return 0;
}
