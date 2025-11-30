#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints members
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Read student data
    printf("Enter name: ");
    scanf("%s", s1.name);   // single-word names
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Call function to print student details
    printStudent(s1);

    return 0;
}