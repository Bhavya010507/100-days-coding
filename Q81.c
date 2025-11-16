#include <stdio.h>
int main() {
    char str[100]; // Declare a character array to store the string
    int count = 0; // Initialize a counter for the characters

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    // Iterate through the string until the null terminator is found
    while (str[count] != '\0') {
        count++; // Increment the counter for each character
    }

    printf("The number of characters in the string is: %d\n", count);

    return 0;
}