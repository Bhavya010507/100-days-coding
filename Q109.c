#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    // Step 1: Compute sum of first k elements
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // add new, remove old
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, max_sum);

    return 0;
}