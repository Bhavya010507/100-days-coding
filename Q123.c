#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Ask for file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;  // end of a word
        } else {
            if (inWord == 0) {
                words++;   // new word starts
                inWord = 1;
            }
        }
    }

    fclose(fp);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}