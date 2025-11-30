#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum - arr[i];
        if (left_sum == right_sum) {
            return i;  // Found the leftmost pivot index
        }
        left_sum += arr[i];
    }

    return -1;  // No pivot index found
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = pivotIndex(arr, n);
    printf("Pivot Index: %d\n", result);

    return 0;
}