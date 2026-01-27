#include <stdio.h>
int main() {
    int callType, minutes, c = 0;
    scanf("%d", &callType);
    scanf("%d", &minutes);
    switch (callType) {
        case 1:
            c = minutes * 1;   
            break;

        case 2:
            c = minutes * 3;   
            break;
        case 3:
            c = minutes * 10;  
            break;

        default:
            break;
            return 0;
    }
    printf("Call Charge %d", c);
    return 0;
}
