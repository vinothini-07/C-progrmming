#include <stdio.h>
#define GRAVITY 9.8

int main() {
    int choice;
    float mass, velocity, height, energy;

    printf("Choose the type of energy to calculate:\n");
    printf("1. Kinetic Energy\n");
    printf("2. Potential Energy\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter mass (kg): ");
            scanf("%f", &mass);
            printf("Enter velocity (m/s): ");
            scanf("%f", &velocity);

            energy = 0.5 * mass * velocity * velocity;
            printf("Kinetic Energy = %.2f Joules\n", energy);
            break;

        case 2:
            printf("Enter mass (kg): ");
            scanf("%f", &mass);
            printf("Enter height (m): ");
            scanf("%f", &height);

            energy = mass * GRAVITY * height;
            printf("Potential Energy = %.2f Joules\n", energy);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}