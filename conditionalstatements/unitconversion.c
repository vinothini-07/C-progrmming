#include <stdio.h>

int main() {
    float value;
    char unit;

    printf("Enter value: ");
    scanf("%f", &value);

    printf("Enter unit (k for kilometres, m for metres): ");
    scanf(" %c", &unit);

    if (unit == 'k' || unit == 'K') {
        printf("Converted value: %.2f metres\n", value * 1000);
    }
    else if (unit == 'm' || unit == 'M') {
        printf("Converted value: %.2f kilometres\n", value / 1000);
    }
    else {
        printf("Invalid unit entered!\n");
    }

    return 0;
}