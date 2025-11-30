#include <stdio.h>

// Define enum
enum Days { SUNDAY = 0, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    // Array of names corresponding to enum values
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    // Loop through all enum values
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}