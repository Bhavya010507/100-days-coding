#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char newLine[256];
    FILE *fp;

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Clear input buffer before using fgets
    getchar();

    // Ask for new line of text
    printf("Enter a new line of text: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Remove newline character if present
    newLine[strcspn(newLine, "\n")] = '\0';

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Append the new line
    fprintf(fp, "%s\n", newLine);

    // Close file
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}