#include <stdio.h>

int findMostFrequentDigit(int n) {
    int counts[10] = {0}; // Array to store counts for digits 0-9
    if (n == 0) {
        return 0; // Special case for number 0
    }
    int temp = (n > 0) ? n : -n; // Handle negative numbers

    while (temp > 0) {
        int digit = temp % 10;
        counts[digit]++;
        temp /= 10;
    }

    int mostFrequentDigit = 0;
    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequentDigit = i;
        }
    }
    return mostFrequentDigit;
}

int main() {
    int number = 123451121;
    int mostFrequent = findMostFrequentDigit(number);
    printf("The most frequent digit in %d is %d\n", number, mostFrequent);

    return 0;
}
