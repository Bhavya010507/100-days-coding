#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m+n];
    mergeArrays(arr1, m, arr2, n, merged);

    printf("Merged sorted array: ");
    for (int i = 0; i < m+n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}