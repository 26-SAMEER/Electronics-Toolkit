
#include <stdio.h>

int main() {
    float voltage, current, power;

    printf("=== Power Calculator ===\n");

    printf("Enter voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter current (A): ");
    scanf("%f", &current);

    power = voltage * current;

    printf("Electrical Power = %.2f Watts\n", power);

    return 0;
}
