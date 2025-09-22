#include <stdio.h>
#include <stdbool.h> // Required for using 'bool' data type
#include <math.h>    // Required for using 'sqrt' function
// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    // Check for divisibility from 2 up to the square root of num
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // Not a prime number
        }
    }
    return true; // Prime number
}
int main() {
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    // Iterate from 1 to n and check if each number is prime
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0; 
}