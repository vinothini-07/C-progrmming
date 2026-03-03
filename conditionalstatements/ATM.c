#include <stdio.h>

int main() {
    int w, b;
    scanf("%d %d", &w, &b);

    if (w < 0 || b < 0) {
        printf("InvalidAmount");
        return 0;
    }

    if (w % 100 != 0) {
        printf("InvalidAmount");
    }
    else if (w + 10 > b) {
        printf("InsufficientFunds");
    }
    else {
        int bal = b - w - 10;
        printf("%d", bal);
    }

    return 0;
}