#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];  // buffer to hold each line

    // Open file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);

    return 0;
}