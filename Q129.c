#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";
    int num, sum = 0, count = 0;

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open %s\n", filename);
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}