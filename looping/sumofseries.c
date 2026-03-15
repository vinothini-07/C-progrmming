#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0;
    long fact = 1;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;   
        sum = sum + pow(2, i) / fact;
    }

    printf("Sum of the series = %lf", sum);

    return 0;
}