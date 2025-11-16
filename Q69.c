#include <stdio.h>
#include <limits.h> // For INT_MIN

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array size must be at least 2.\\n");
        return INT_MIN; // Or some error indicator
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Current largest becomes second largest
            largest = arr[i];        // New largest found
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (e.g., all elements are the same).\\n");
    }

    return secondLargest;
}

// Example usage
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int second = findSecondLargest(arr, size);
    if (second != INT_MIN) {
        printf("The second largest element is %d.\\n", second);
    }
    return 0;
}
