#include <stdio.h>

int main() {
    int num;
    int singleDigit = 0, doubleDigit = 0;
    int multipleOf3 = 0, multipleOf5 = 0;
    int positive = 0, negative = 0;

    for (int i = 0; i <5; i++) {
        scanf("%d", &num);
        if (num != 0) {
            if (num >= -9 && num <= 9) {
                singleDigit++;
            }
        }
        if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99)) {
            doubleDigit++;
        }
        if (num != 0) {
            if (num % 3 == 0) {
                multipleOf3++;
            }
        }
        if (num != 0) {
            if (num % 5 == 0) {
                multipleOf5++;
            }
        }
        if (num > 0) {
            positive++;
        }
        if (num < 0) {
            negative++;
        }
    }

    printf("%d\n", singleDigit);
    printf("%d\n", doubleDigit);
    printf("%d\n", multipleOf3);
    printf("%d\n", multipleOf5);
    printf("%d\n", positive);
    printf("%d\n", negative);

    return 0;
}