#include <stdio.h>
int main() {
    int i, j;
    // Outer loop for the rows (from 5 down to 1)
    for (i = 5; i >= 1; i--) {
        // Inner loop for printing numbers in each row
        // It starts from the current value of 'i' and goes up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after printing each row
    }
  return 0;
}