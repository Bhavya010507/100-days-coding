#include <stdio.h>
int main() {
    char myString[] = "Hello"; // Declare and initialize a string
    int i = 0;

    // Loop through the string until the null terminator is encountered
    while (myString[i] != '\0') {
        printf("%c\n", myString[i]); // Print the current character followed by a newline
        i++;                         // Move to the next character
    }

    return 0;
}