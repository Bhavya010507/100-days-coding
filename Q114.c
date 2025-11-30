#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char *s) {
    int n = strlen(s);
    int freq[256] = {0};   // frequency array for ASCII characters
    int start = 0, maxLen = 0;

    for (int end = 0; end < n; end++) {
        freq[(unsigned char)s[end]]++;

        // If character repeats, shrink window from left
        while (freq[(unsigned char)s[end]] > 1) {
            freq[(unsigned char)s[start]]--;
            start++;
        }

        // Update maximum length
        int windowLen = end - start + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }
    return maxLen;
}

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = longestUniqueSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}