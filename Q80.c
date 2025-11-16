#include <stdio.h>
int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    // Get dimensions of the first matrix
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Get dimensions of the second matrix
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Column of first matrix must be equal to the row of the second matrix.\n");
        return 0;
    }

    // Read elements of the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read elements of the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize the result matrix with zeros
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result matrix
    printf("\nProduct of matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}