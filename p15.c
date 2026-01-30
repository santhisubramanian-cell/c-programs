#include <stdio.h>

int main() {
    
    for (int i = 0; i < 5; i++) {
        for (char ch = 'A'; ch < 'A' + (5 - i); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
