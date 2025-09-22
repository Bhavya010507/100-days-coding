#include <stdio.h>
#include <math.h> // Required for sqrt() function
int main() {
    int number, isPrime = 1; // isPrime is a flag, 1 for prime, 0 for not prime
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    // Handle special cases for prime numbers
    if (number <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else if (number == 2) {
        isPrime = 1; // 2 is the only even prime number
    } else if (number % 2 == 0) {
        isPrime = 0; // All other even numbers are not prime
    } else {
        // Check for divisibility by odd numbers from 3 up to the square root of the number
        for (int i = 3; i <= sqrt(number); i += 2) {
            if (number % i == 0) {
                isPrime = 0; // If a divisor is found, it's not prime
                break;       // No need to check further
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
  return 0;
}