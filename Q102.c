#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;  // default if no ceil exists

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible ceil found
            high = mid - 1;    // search left for smaller index
        } else {
            low = mid + 1;     // search right
        }
    }
    return result;
}

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}