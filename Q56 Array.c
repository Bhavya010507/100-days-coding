#include <stdio.h>

int main() {
    int n, i;
    // Prompt the user to enter the size of the array
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);
    // Declare a one-dimensional array of size 'n'
    int arr[n]; 
     // Read elements into the array
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Print the elements of the array
    printf("\nThe elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Newline for better formatting

    return 0;
}
