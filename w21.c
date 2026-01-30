#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int totalCongestionMinutes = 0;
    int currentStreak = 0;
    int longestStreak = 0;
    int count = 0;

    while (count < N) {
        int vehicleCount;
        scanf("%d", &vehicleCount);

        if (vehicleCount > 20) {
            totalCongestionMinutes++;
            currentStreak++;
        } else {
            currentStreak = 0;
        }

        if (currentStreak > longestStreak) {
            longestStreak = currentStreak;
        }

        count++;
    }

    printf("Congestion Minutes: %d\n", totalCongestionMinutes);
    printf("Longest Congestion Streak: %d\n", longestStreak);

    return 0;
}
