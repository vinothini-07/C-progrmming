#include <stdio.h>

int main() {
    int n, square;
    int temp, count = 0, power = 1;
    scanf("%ld", &n);
    square = n * n;
    temp = n;
    if(n<0){
        printf("Invalid");
        return 0;
    }
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    for (int i = 0; i < count; i++) {
        power = power * 10;
    }
    if (square % power == n)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");

    return 0;
}