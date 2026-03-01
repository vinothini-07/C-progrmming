#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Hexadecimal equivalent: %X\n", decimal);
        printf("Octal equivalent: %o\n", decimal);
    }

    return 0;
}