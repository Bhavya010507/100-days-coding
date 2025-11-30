#include <stdio.h>

// Define enum for gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct with enum Gender
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1;

    // Assign values
    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter age: ");
    scanf("%d", &p1.age);

    printf("Enter gender (0=Male, 1=Female, 2=Other): ");
    scanf("%d", (int*)&p1.gender);

    // Print details
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    // Print gender based on enum
    switch (p1.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Invalid gender value\n");
    }

    return 0;
}