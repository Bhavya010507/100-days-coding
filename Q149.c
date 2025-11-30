#include <stdio.h>
#include <stdlib.h>  // for malloc()

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Dynamically allocate memory for one Student
    struct Student *s = (struct Student *) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read student details
    printf("Enter student name: ");
    scanf("%s", s->name);   // single-word names
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}