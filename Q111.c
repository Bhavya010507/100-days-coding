#include <stdio.h>
#include <stdlib.h>

// Function to print first negative integer in every window of size k
void printFirstNegative(int arr[], int n, int k) {
    int i, start = 0, end = 0;
    int queue[n];   // to store indices of negative numbers
    int front = 0, rear = 0;

    while (end < n) {
        // If current element is negative, add its index to queue
        if (arr[end] < 0) {
            queue[rear++] = end;
        }

        // Check if window size reached
        if (end - start + 1 == k) {
            // Print the first negative number in the window
            if (front != rear) {
                printf("%d ", arr[queue[front]]);
            } else {
                printf("0 ");
            }

            // Slide the window
            if (front != rear && queue[front] == start) {
                front++; // remove element going out of window
            }
            start++;
        }
        end++;
    }
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    printFirstNegative(arr, n, k);

    return 0;
}