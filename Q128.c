#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower((unsigned char)ch); // normalize to lowercase

        if (isalpha(ch)) { // only consider alphabetic characters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}