#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);
     // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            // Print asterisk for the first row, last row, first column, or last column
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                // Print space for the interior of the square
                printf("  "); // Two spaces to align with "* "
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;

}