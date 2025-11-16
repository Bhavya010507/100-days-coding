#include <stdio.h>
int main() {
    int rows, cols;

    // Get dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix (using VLA, requires C99 or later)
    int matrix[rows][cols];

    // Read matrix elements
    printf("\nEnter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // Print element followed by a tab
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}