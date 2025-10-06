#include <stdio.h>
// Function to calculate HRA and DA and return the total monthly salary
float calculateMonthlySalary(float basicSalary, int isMetroCity) {
    float hra, da, monthlySalary;
   // Calculate HRA based on city type
    if (isMetroCity == 1) {
        hra = 0.15 * basicSalary; // 15% for metro city
    } else {
        hra = 0.10 * basicSalary; // 10% for non-metro city
    }
    // Calculate DA (5%)
    da = 0.05 * basicSalary;
   // Calculate total monthly salary
    monthlySalary = basicSalary + hra + da;
    return monthlySalary;
}
int main() {
    float basicSalary;
    int isMetroCity; // 1 for metro, 0 for non-metro
    float totalMonthlySalary;
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    printf("Is the employee in a metro city? (1 for Yes, 0 for No): ");
    scanf("%d", &isMetroCity);
  // Call the function to calculate the monthly salary
    totalMonthlySalary = calculateMonthlySalary(basicSalary, isMetroCity);
   // Display the calculated monthly salary
    printf("The employee's total monthly salary is: %.2f\n", totalMonthlySalary);
    return 0;
}