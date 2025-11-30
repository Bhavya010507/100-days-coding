#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];  // array of 5 students

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

    // Print details of all students
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name = %s, Roll No = %d, Marks = %.2f\n",
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}