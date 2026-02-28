#include <stdio.h>

int main() {
    char size, fuel;
    int purpose;

   
    printf("Enter Vehicle Size (S-Small, M-Medium, L-Large): ");
    scanf(" %c", &size);

    printf("Enter Fuel Type (G-Gasoline, D-Diesel, E-Electric): ");
    scanf(" %c", &fuel);

    printf("Enter Purpose (3-Personal, 1-Commercial, 2-Public Transport): ");
    scanf("%d", &purpose);

    
    printf("\n--- Vehicle Information ---\n");

   
    if (size == 'S' || size == 's')
        printf("Size: Small Vehicle\n");
    else if (size == 'M' || size == 'm')
        printf("Size: Medium Vehicle\n");
    else if (size == 'L' || size == 'l')
        printf("Size: Large Vehicle\n");
    else {
        printf("Invalid Vehicle Size!\n");
        return 0;
    }

   
    if (fuel == 'G' || fuel == 'g')
        printf("Fuel Type: Gasoline\n");
    else if (fuel == 'D' || fuel == 'd')
        printf("Fuel Type: Diesel\n");
    else if (fuel == 'E' || fuel == 'e')
        printf("Fuel Type: Electric\n");
    else {
        printf("Invalid Fuel Type!\n");
        return 0;
    }

    
    if (purpose == 3)
        printf("Purpose: Personal Use\n");
    else if (purpose == 1)
        printf("Purpose: Commercial Use\n");
    else if (purpose == 2)
        printf("Purpose: Public Transport\n");
    else {
        printf("Invalid Purpose!\n");
        return 0;
    }

    printf("\nVehicle details recorded successfully.\n");

    return 0;
}