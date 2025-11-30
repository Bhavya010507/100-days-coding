#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    FILE *fp;
    char buffer[256];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // Read and display content until EOF
    printf("\n--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);

    return 0;
}