#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", srcFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", srcFile, destFile);

    return 0;
}