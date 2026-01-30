#include <stdio.h>

int main() {
    int c, n;
    int beds = 0;
    int hours = 0;
    
    scanf("%d %d", &c, &n) ;

    int ori = n; 
    while (n > 0) {
        int hour;
        scanf("%d", &hour);
        beds += hour;
        if (beds > c) {
            beds = c;
        }
        if (beds < 0) { 
            beds = 0;
        }
        if (beds > (0.9 * c)) {
            hours++;
        }
        
        n--;
    }
    printf("Final Occupied Beds: %d\n",beds);
    printf("Critical Hours: %d\n", hours);

    return 0;
}
