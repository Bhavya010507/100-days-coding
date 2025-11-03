#include <stdio.h>
int main() {
    int size, i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size]; // Declare array of user-specified size
    for (i = 0; i < size; i++) {
    printf("Enter elements for the array:\n");
        scanf("%d", &arr[i]);
    }
   // Count positive, negative, and zero elements
    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("\n--- Results ---\n");
    printf("Positive elements: %d\n", positive_count);
    printf("Negative elements: %d\n", negative_count);
    printf("Zero elements: %d\n", zero_count);

    return 0;

}
