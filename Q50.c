#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 0; i < n; i++) {
        // Print spaces
        for (j = 0; j < i; j++)
            printf(" ");
        // Print stars
        for (j = i; j < n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}