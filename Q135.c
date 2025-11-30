#include <stdio.h>

// Define enum with explicit values starting from 10
enum Status { SUCCESS = 10, FAILURE, TIMEOUT };

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}