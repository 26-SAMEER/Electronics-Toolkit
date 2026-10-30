
#include <stdio.h>

int main() {
    float voltage, current, resistance;

    printf("=== Electronics Toolkit ===\n");
    printf("Ohm's Law Calculator\n");

    printf("Enter voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter current (A): ");
    scanf("%f", &current);

    if (current == 0) {
        printf("Current cannot be zero!\n");
    } else {
        resistance = voltage / current;
        printf("Resistance = %.2f Ohms\n", resistance);
    }

    return 0;
}

