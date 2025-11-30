#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix[n], suffix[n], answer[n];

    // Step 1: Build prefix products
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Step 2: Build suffix products
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Step 3: Build answer array
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    // Print result
    printf("Answer array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}