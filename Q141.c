#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read student data
    printf("Enter student name: ");
    scanf("%s", s.name);   // single-word name
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print student data
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}