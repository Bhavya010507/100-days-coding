#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        // Sum from 1 to x
        int leftSum = x * (x + 1) / 2;
        // Sum from x to n = totalSum - sum(1 to x-1)
        int rightSum = totalSum - (x - 1) * x / 2;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    // If no pivot integer found
    printf("-1\n");
    return 0;
}
