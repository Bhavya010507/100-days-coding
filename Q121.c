#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Take user input
    printf("Enter your name: ");
    scanf("%s", name);   // reads a single word name
    printf("Enter your age: ");
    scanf("%d", &age);

    // Open file in write mode
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    // Confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}