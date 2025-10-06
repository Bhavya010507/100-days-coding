#include <stdio.h>
int main() {
    int days_late;
    float fine = 0.0;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);
     if (days_late <= 0) {
        printf("No fine. Book returned on time or early.\n");
    } else if (days_late <= 5) {
        fine = days_late * 2.0;
        printf("Fine: ₹%.2f\n", fine);
    } else if (days_late <= 10) {
        fine = (5 * 2.0) + ((days_late - 5) * 4.0);
        printf("Fine: ₹%.2f\n", fine);
    } else if (days_late <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((days_late - 10) * 6.0);
        printf("Fine: ₹%.2f\n", fine);
    } else {
        printf("Membership Cancelled due to excessive delay.\n");
    }
  return 0;
}
