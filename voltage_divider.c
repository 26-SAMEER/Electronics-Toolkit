
#include <stdio.h>

int main() {
    float vin, r1, r2, vout;

    printf("=== Voltage Divider Calculator ===\n");

    printf("Enter input voltage: ");
    scanf("%f", &vin);

    printf("Enter R1: ");
    scanf("%f", &r1);

    printf("Enter R2: ");
    scanf("%f", &r2);

    if (r1 + r2 <= 0) {
        printf("Invalid resistance values!\n");
    } else {
        vout = vin * r2 / (r1 + r2);
        printf("Output voltage = %.2f V\n", vout);
    }

    return 0;
}
