
#include <stdio.h>

int main() {
    int choice;
    float voltage, current, result;

    printf("\n===== ELECTRONICS TOOLKIT =====\n");
    printf("1. Calculate Resistance\n");
    printf("2. Calculate Power\n");
    printf("3. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter voltage (V): ");
            scanf("%f", &voltage);

            printf("Enter current (A): ");
            scanf("%f", &current);

            if (current == 0) {
                printf("Current cannot be zero!\n");
            } else {
                result = voltage / current;
                printf("Resistance = %.2f Ohms\n", result);
            }
            break;

        case 2:
            printf("Enter voltage (V): ");
            scanf("%f", &voltage);

            printf("Enter current (A): ");
            scanf("%f", &current);

            result = voltage * current;
            printf("Power = %.2f Watts\n", result);
            break;

        case 3:
            printf("Thank you for using Electronics Toolkit!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
