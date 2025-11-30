#include <stdio.h>
int main() {
    int i, j, n = 5;
    // Upper half
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }
    // Lower half
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}