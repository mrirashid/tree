#include <stdio.h>
int main() {
    int i, j, n = 4;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("X");
        }

        printf("\n");
    }

    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= n - 1; j++) {
            printf(" ");
        }
        printf("X\n");
    }

    return 0;
}
