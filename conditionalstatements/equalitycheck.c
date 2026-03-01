#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (!(a ^ b))
        printf("Both numbers are equal\n");
    else
        printf("Numbers are not equal\n");

    return 0;
}