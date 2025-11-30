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

    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int prev = -1;  // default if no greater element exists on the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  // nearest greater found
            }
        }
        printf("%d", prev);
        if (i != n - 1) {
            printf(",");  // comma separated output
        }
    }
    printf("\n");

    return 0;
}