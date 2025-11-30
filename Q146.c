#include <stdio.h>

// Define nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure with nested Date
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    // Read employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);   // single-word names
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}