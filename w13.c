#include <stdio.h>

int main() {
    int initialData, days, usage, currentDay = 1;
        scanf("%d %d", &initialData, &days);
        while (currentDay <= days) {
        scanf("%d", &usage);
        initialData -= usage;

        if (initialData <= 0) {
            printf("Exhausted Day: %d\n", currentDay);
            printf("Overused Data: %d\n", -initialData);
            break; 
        }
        
        currentDay++;
    }

    return 0;
}
