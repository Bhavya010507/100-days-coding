#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
        }
    for (int i = 2; i * i <= num; i++) { // Optimized loop condition
        if (num % i == 0) {
            return 0; // Not prime if divisible by any number other than 1 and itself
        }
    }
    return 1; // It's a prime number
}

int main() {
    int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    for (int i = 2; i <= n; i++) { // Start checking from 2
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}