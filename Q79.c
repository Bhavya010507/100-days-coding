#include <stdio.h>

int main() {
    int n, i, j;

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

    printf("\nDiagonal Traversal:\n");

    // Traverse upper diagonals (including main diagonal)
    for (int col = 0; col < n; col++) {
        i = 0;
        j = col;
        while (i < n && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse lower diagonals
    for (int row = 1; row < n; row++) {
        i = row;
        j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}