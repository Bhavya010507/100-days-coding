#include <stdio.h>
#include <limits.h>

int kadane(int arr[], int n) {
    int max_so_far = arr[0];       // initialize with first element
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        // either extend the previous subarray or start new from current element
        if (max_ending_here + arr[i] > arr[i]) {
            max_ending_here = max_ending_here + arr[i];
        } else {
            max_ending_here = arr[i];
        }

        // update global maximum
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = kadane(arr, n);
    printf("Maximum subarray sum: %d\n", result);

    return 0;
}