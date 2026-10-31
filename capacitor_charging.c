#include <stdio.h>
#include <math.h>

int main() {
    double vs, resistance, capacitance, time;
    double vc, tau;

    printf("=== Capacitor Charging Calculator ===\n");

    printf("Enter supply voltage (V): ");
    scanf("%lf", &vs);

    printf("Enter resistance (ohms): ");
    scanf("%lf", &resistance);

    printf("Enter capacitance (farads): ");
    scanf("%lf", &capacitance);

    printf("Enter charging time (seconds): ");
    scanf("%lf", &time);

    if (resistance <= 0 || capacitance <= 0 || time < 0) {
        printf("Invalid input values!\n");
        return 1;
    }

    tau = resistance * capacitance;

    vc = vs * (1 - exp(-time / tau));

    printf("\nTime constant = %.4f seconds\n", tau);
    printf("Capacitor voltage = %.4f V\n", vc);

    return 0;
}