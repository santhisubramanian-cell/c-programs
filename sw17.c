#include <stdio.h>

int main() {
    int vehicleType, hours;
    int ratePerHour, totalFee;
    scanf("%d", &vehicleType);
    scanf("%d", &hours);
    switch (vehicleType) {
        case 1:
            ratePerHour = 10;  
            break;
        case 2:
            ratePerHour = 20;  
            break;
        default:
            ratePerHour = 20;  
    }
    totalFee = ratePerHour * hours;

    printf("Parking Fee %d", totalFee);

    return 0;
}
