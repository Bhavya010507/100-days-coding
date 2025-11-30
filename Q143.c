#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, maxIndex = 0;

    // Read details of 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);   // single-word names
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print student with highest marks
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}