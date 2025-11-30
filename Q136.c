#include <stdio.h>

// Define enum for menu choices
enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice;
    int a, b, result;

    // Ask user for two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Show menu
    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform operation based on choice
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}