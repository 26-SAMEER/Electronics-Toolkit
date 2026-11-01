
#include <stdio.h>

// Function to calculate current
float calculateCurrent(float voltage, float resistance) {
    return voltage / resistance;
}

int main() {
    float voltage, resistance, current;

    printf("================================\n");
    printf("       CURRENT CALCULATOR       \n");
    printf("================================\n");

    printf("Enter voltage (V): ");
    if (scanf("%f", &voltage) != 1) {
        printf("Invalid voltage input!\n");
        return 1;
    }

    printf("Enter resistance (ohms): ");
    if (scanf("%f", &resistance) != 1) {
        printf("Invalid resistance input!\n");
        return 1;
    }

    // Validate resistance
    if (resistance <= 0) {
        printf("Resistance must be greater than zero!\n");
        return 1;
    }

    // Calculate current
    current = calculateCurrent(voltage, resistance);

    printf("\n========== RESULT ==========\n");
    printf("Voltage  = %.2f V\n", voltage);
    printf("Resistance = %.2f ohms\n", resistance);
    printf("Current  = %.4f A\n", current);
    printf("============================\n");

    return 0;
}
