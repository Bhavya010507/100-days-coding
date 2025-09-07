#include<stdio.h>
int main() {
 int n, r, sum = 0, temp;
 // Input: Read a number from the user
 printf("Enter the number: ");
 scanf("%d", &n);
 temp = n; // Store the original number for later comparison
 // Calculate the sum of cubes of digits
 while (n > 0) {
 r = n % 10; // Extract the last digit
 sum = sum + (r * r * r); // Add the cube of the digit to sum
 n = n / 10; // Remove the last digit from the number
 }
 // Check if the original number equals the sum of cubes of its digits
 if (temp == sum)
 printf("Armstrong number\n");
 else
 printf("Not an Armstrong number\n");
 return 0;
}
