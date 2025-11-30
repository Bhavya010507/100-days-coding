#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming elements are in range [0..n-1] or similar
    int seen[n+1];   // frequency array
    for (int i = 0; i <= n; i++) {
        seen[i] = 0;
    }

    // Single iteration to find repeated element
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    // If no repetition found (though problem guarantees one)
    printf("No repetition found\n");
    return 0;
}