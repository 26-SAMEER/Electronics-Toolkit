
#include <stdio.h>

// Function to calculate series resistance
float calculateSeries(float resistance[], int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += resistance[i];
    }

    return total;
}

// Function to calculate parallel resistance
float calculateParallel(float resistance[], int n) {
    float reciprocalSum = 0;

    for (int i = 0; i < n; i++) {
        reciprocalSum += 1.0 / resistance[i];
    }

    return 1.0 / reciprocalSum;
}

int main() {
    int n;
    float resistance[100];

    printf("====================================\n");
    printf(" SERIES & PARALLEL RESISTANCE CALCULATOR\n");
    printf("====================================\n");

    printf("Enter the number of resistors: ");
    scanf("%d", &n);

    // Validate number of resistors
    if (n <= 0 || n > 100) {
        printf("Invalid number of resistors!\n");
        return 1;
    }

    // Take resistor values
    for (int i = 0; i < n; i++) {
        printf("Enter resistance of R%d (ohms): ", i + 1);
        scanf("%f", &resistance[i]);

        if (resistance[i] <= 0) {
            printf("Resistance must be greater than zero!\n");
            return 1;
        }
    }

    // Calculate equivalent resistance
    float series = calculateSeries(resistance, n);
    float parallel = calculateParallel(resistance, n);

    // Display results
    printf("\n========== RESULTS ==========\n");

    printf("Series Resistance   = %.2f ohms\n", series);
    printf("Parallel Resistance = %.2f ohms\n", parallel);

    printf("=============================\n");

    return 0;
}

