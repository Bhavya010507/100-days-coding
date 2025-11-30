#include <stdio.h>

int main() {
    int i;

    // First group: 1 star
    for (i = 0; i < 1; i++) {
        printf("*\n");
    }
    printf("\n"); // blank line

    // Second group: 5 stars
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n"); // blank line

    // Third group: 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }

    return 0;
}