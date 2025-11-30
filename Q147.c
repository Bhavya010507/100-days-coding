#include <stdio.h>

// Define Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee employees[3], temp;
    FILE *fp;

    // Input employee data
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);   // single-word names
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Write employee data to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error: Cannot open file for writing!\n");
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nEmployee data successfully written to employees.dat\n");

    // Read employee data back from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error: Cannot open file for reading!\n");
        return 1;
    }

    printf("\n--- Employee Records from File ---\n");
    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s, ID: %d, Salary: %.2f\n",
               temp.name, temp.id, temp.salary);
    }

    fclose(fp);
    return 0;
}