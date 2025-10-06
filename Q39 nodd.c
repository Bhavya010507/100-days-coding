#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter the number of first odd numbers (n): ");
    scanf("%d", &n);
    sum = n * n;
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
