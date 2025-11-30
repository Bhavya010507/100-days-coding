#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    // Read matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for (i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    // Print result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
