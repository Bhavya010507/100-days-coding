#include <stdio.h>
// Global variable to store the account balance
float balance = 1000.0; // Initial balance
// Function to display the current balance
void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}
// Function to deposit money
void deposit() {
    float amount;
    printf("Enter amount to deposit: $");
    scanf("%f", &amount);
    if (amount > 0) {
        balance += amount;
        printf("Deposit successful. New balance: $%.2f\n", balance);
    } else {
        printf("Invalid deposit amount.\n");
    }
}
// Function to withdraw money
void withdraw() {
    float amount;
    printf("Enter amount to withdraw: $");
    scanf("%f", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal successful. New balance: $%.2f\n", balance);
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        printf("Invalid withdrawal amount.\n");
    }
}
// Function to display the menu
void displayMenu() {
    printf("\n--- Banking System Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}
int main() {
    int choice;
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the banking system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
return 0;

}
