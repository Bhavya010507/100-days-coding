#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to return top student
struct Student getTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex]; // return the structure
}

int main() {
    struct Student students[5];

    // Read details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);   // single-word names
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Get top student
    struct Student topper = getTopStudent(students, 5);

    // Print top student's details
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}