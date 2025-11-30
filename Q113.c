#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // kth smallest element
    printf("The %dth smallest element is: %d\n", k, arr[k-1]);

    return 0;
}