#include <stdio.h>

int main() {
    int n;
    int rem, rev = 0;
    int sign = 1;

    scanf("%d", &n);

    if(n < 0){
        sign = -1;
        n = -n;
    }

    while(n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;   
        n = n / 10;
    }

    int real = rev * sign;
    printf("%d", real);

    return 0;
}