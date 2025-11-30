#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int next = -1;  // default if no greater element exists
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;  // nearest greater found
            }
        }
        printf("%d", next);
        if (i != n - 1) {
            printf(",");  // comma separated output
        }
    }
    printf("\n");

    return 0;
}