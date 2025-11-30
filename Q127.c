#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file in read mode
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper((unsigned char)ch), outFile);
    }

    // Close files
    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete. Output written to output.txt\n");

    return 0;
}