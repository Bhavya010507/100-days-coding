#include <stdio.h>

void calculateRowSums(int matrix[][10], int rows, int cols, int rowSums[]) {
    for (int i = 0; i < rows; i++) {
        int currentSum = 0;
        for (int j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum; // Store the sum of the current row
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10]; // Declare a 2D array (matrix)
    int rowSums[10];    // Declare an array to store row sums

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    calculateRowSums(matrix, rows, cols, rowSums); // Call the function to calculate sums

    printf("\nRow sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i, rowSums[i]);
    }

    return 0;
}