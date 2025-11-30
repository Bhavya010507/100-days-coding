#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

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

    // Check distinctness of diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }

    // Print result
    if (flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
