#include <stdio.h>
int main() {
    int number, sum= 0, i;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

   // Calculate the sum of proper divisors
    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum+i;
        }
    }
    // Check if the sum of divisors equals the number
    if (sum == number && number > 0) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}