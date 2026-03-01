#include <stdio.h>
#include <math.h>

int main() {
    int number;
    double root;
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        root = sqrt(number);

        if ((int)root * (int)root == number)
            printf("%d is a Perfect Square.\n", number);
        else
            printf("%d is NOT a Perfect Square.\n", number);
    }

    return 0;
}