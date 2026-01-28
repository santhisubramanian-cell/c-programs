#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2;  i <= num/2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            count++;
    }
    printf("%d", count);
    return 0;
}
