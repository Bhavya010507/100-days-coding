#include <stdio.h>

// Define enum for traffic lights
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    // Example: set signal to RED
    signal = RED;

    // Print action based on signal
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }

    return 0;
}