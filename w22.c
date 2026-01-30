#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int attempts = 0;
    int failedAttempts = 0;
    int lockTriggeredAt = 0;
    int input;

    while (attempts < N) {
        scanf("%d", &input);
        attempts++;

        if (input == 0) {
            failedAttempts++;
        }

        if (failedAttempts >= 3 && lockTriggeredAt == 0) {
            lockTriggeredAt = attempts;
        }
    }

    if (lockTriggeredAt == 0) {
        printf("Lock Triggered At Attempt: N/A\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockTriggeredAt);
    }
    
    printf("Total Failed Attempts: %d\n", failedAttempts);

    return 0;
}
