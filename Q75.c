#include <stdio.h>

int main() {
    int rows, cols;
    int matrix1[10][10], matrix2[10][10], sumMatrix[10][10];
    int i, j;

    // Get dimensions of the matrices from the user
    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);

    // Input elements for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}