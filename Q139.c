#include <stdio.h>

// Define enum with explicit values
enum Status { SUCCESS = 10, FAILURE = 20, TIMEOUT = 30 };

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}