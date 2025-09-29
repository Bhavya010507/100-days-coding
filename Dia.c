#include <stdio.h>

int main() {
    int i, j, rows;

    // User input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the upper part of the diamond pattern
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    // Loop to print the lower part of the diamond pattern
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (j = rows; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}