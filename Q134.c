#include <stdio.h>

// Define enum for status codes
enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result;

    // Example: set result to SUCCESS
    result = SUCCESS;

    // Print message based on result
    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}