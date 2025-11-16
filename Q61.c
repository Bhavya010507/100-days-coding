#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 110;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }

    return 0;
}
