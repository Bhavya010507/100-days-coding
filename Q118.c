#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - actualSum;
    printf("Missing number: %d\n", missing);

    return 0;
}