#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        // Print spaces
        for (j = 1; j < i; j++)
            printf(" ");
        // Print numbers from i to n
        for (j = i; j <= n; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}