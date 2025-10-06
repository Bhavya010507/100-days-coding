#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        // If 'num' is perfectly divisible by 'i', then 'i' is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n"); 
   return 0; }
