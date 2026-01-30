#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int amount;
    int count = 1; 
    int fraudTriggeredAt = -1; 
    int highValueCount = 0;
    const int THRESHOLD = 50000;
    while (count <= N) {
        scanf("%d", &amount);
        if (amount > THRESHOLD) {
            highValueCount++;
            if (fraudTriggeredAt == -1) {
                fraudTriggeredAt = count;
            }
        }
        count++;
    }

    if (fraudTriggeredAt != -1) {
        printf("Fraud Triggered At Attempt: %d\n", fraudTriggeredAt);
    } else {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    }
    printf("High-Value Transactions: %d\n", highValueCount);

    return 0;
}
