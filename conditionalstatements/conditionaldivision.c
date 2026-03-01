#include <stdio.h>

int main() {
    int a, b, product;
    scanf("%d %d", &a, &b);

    product = a * b;

    if (product % 2 == 0) {
        printf("Product is even.\n");
        printf("Product divided by 2 = %d\n", product / 2);
    } else {
        printf("Product is odd.\n");
        printf("Product divided by 3 = %d\n", product / 3);
    }

    return 0;
}