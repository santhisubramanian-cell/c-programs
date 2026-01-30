#include <stdio.h>

int main() {
    int maxCapacity, n, patients, treated = 0, rejected = 0;
    scanf("%d %d", &maxCapacity, &n) ;
    int i = 0;
        while (i < n) {
        scanf("%d", &patients);
        int remaining = maxCapacity - treated;
        
        if (patients <= remaining) {
            treated += patients;
        } else {
            rejected += (patients - remaining);
            treated += remaining;
        }
        i++;
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);

    return 0;
}
