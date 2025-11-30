#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}