#include <stdio.h>

int main() {
    char size;

    printf("Enter dress size (S, M, L, X for XL, etc.): ");
    scanf(" %c", &size);

    switch (size) {
        case 'S':
        case 's':
            printf("Size: Small\n");
            break;
        case 'M':
        case 'm':
            printf("Size: Medium\n");
            break;
        case 'L':
        case 'l':
            printf("Size: Large\n");
            break;
        case 'X':
        case 'x':
            printf("Size: Extra Large (XL)\n");
            break;
        default:
            printf("Invalid size entered!\n");
    }

    return 0;
}