#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    // The loop continues as long as the number is not zero
    while (number != 0) {
        // Extract the last digit using the modulo operator
        digit = number % 10;
        // Add the extracted digit to the sum
        sum += digit;
        // Remove the last digit by integer division
        number /= 10;
    }
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
