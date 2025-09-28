#include <stdio.h>
void findMinMax(int arr[], int n, int *max, int *min) {
    // Assuming the first element as both minimum and maximum initially
    *max = arr[0];
    *min = arr[0];
    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // If the current element is greater than the current maximum, update max
        if (arr[i] > *max) {
            *max = arr[i];
        }
        // If the current element is smaller than the current minimum, update min
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
int main() {
    int arr[] = {5, 2, 7, 6, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int max_val, min_val;

    // Call the function to find minimum and maximum
    findMinMax(arr, n, &max_val, &min_val);

    printf("Maximum element: %d\n", max_val);
    printf("Minimum element: %d\n", min_val);

    return 0;
}