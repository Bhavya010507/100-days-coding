#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int originalMatrix[m][n];
    int transposeMatrix[n][m];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposeMatrix[j][i] = originalMatrix[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}