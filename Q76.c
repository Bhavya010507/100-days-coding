#include <stdio.h>
#include <stdbool.h> // For using bool type

// Function to check if a matrix is symmetric
bool isSymmetric(int rows, int cols, int matrix[rows][cols]) {
    // A symmetric matrix must be a square matrix
    if (rows != cols) {
        return false;
    }

    // Compare elements with their transposed counterparts
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false; // Found a mismatch, not symmetric
            }
        }
    }
    return true; // All elements matched, it's symmetric
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a VLA (Variable Length Array) for the matrix
    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if (isSymmetric(rows, cols, matrix)) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}