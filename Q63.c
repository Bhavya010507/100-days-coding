#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    // Copy elements of the first array
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    // Copy elements of the second array
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    printf("Merged array: ");
    printArray(mergedArr, mergedSize);

    return 0;
}
