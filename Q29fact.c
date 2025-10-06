#include <stdio.h>

int main() {
    int number;
    long long factorial = 1; // Use long long to handle larger factorials
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else if (number == 0) {
        printf("Factorial of 0 is 1.\n");
    } 
    else {
        for (int i = 1; i <= number; i++) {
            factorial *= i; // Multiply factorial by each number from 1 to 'number'
        }
        printf("Factorial of %d is: %lld\n", number, factorial);
    }

    return 0;
}
