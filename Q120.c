#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Convert to sentence case
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (i == 0 && isalpha(str[i])) {
            str[i] = toupper(str[i]);   // first character uppercase
        } else {
            str[i] = tolower(str[i]);   // rest lowercase
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}