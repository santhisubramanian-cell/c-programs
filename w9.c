#include <stdio.h>

int main() {
    int fuel, n, consumed, trips = 0;
    scanf("%d %d", &fuel, &n);
    while (n > 0) {
        scanf("%d", &consumed);
        
        if (fuel >= consumed) {
            fuel -= consumed;
            trips++;
        } else {
            break;
        }
        n--;
    }
    
    printf("Completed Trips: %d\nRemaining Fuel: %d\n", trips, fuel);
    
    return 0;
}
