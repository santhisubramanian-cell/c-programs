#include <stdio.h>

int main() {
    int customerType;
    float billAmount, discount = 0, payAmount;
    scanf("%d", &customerType);
    scanf("%f", &billAmount);
    switch (customerType) {
        case 1:
            discount = 0.05;   
            break;

        case 2:
            discount = 0.15;   
            break;

        default:
            break;
            return 0;
    }
    payAmount = billAmount - (billAmount * discount);
    printf("Pay %.0f", payAmount);

    return 0;
}
