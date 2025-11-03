#include <stdio.h>
int main() {
    int i,n;
    printf("Enter the size");
    int evenCount = 0; // Initialize count for even numbers
    int oddCount = 0;  // Initialize count for odd numbers
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements into the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    // Iterate through the array elements
    for (int i = 0; i < n; i++) {
        // Check if the current element is even or odd
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count if even
        } else {
            oddCount++;  // Increment odd count if odd
        }
    }

    // Print the results
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}
