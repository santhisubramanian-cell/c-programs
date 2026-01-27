#include <stdio.h>
int main() {
    int Days, a = 0;
    scanf("%d", &Days);
    switch (1) {
        case 1:
            if (Days <= 5)
                a = Days * 50;
            else if (Days <= 10)
                a = Days * 100;
            else
                a = Days * 200;
            break;
    }
    printf("Fine %d", a);

    return 0;
}
