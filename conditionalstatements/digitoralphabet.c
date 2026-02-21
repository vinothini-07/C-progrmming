#include <stdio.h>

int main() {
    char ch;
    int upper = 0, lower = 0, digit = 0;
    int vowel = 0, consonant = 0, special = 0;

    for (int i = 0; i < 5; i++) {
        scanf(" %c", &ch);
        if (ch >= 'A' && ch <= 'Z') {
            upper++;
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel++;
            } else {
                consonant++;
            }
        }
        else if (ch >= 'a' && ch <= 'z') {
            lower++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel++;
            } else {
                consonant++;
            }
        }
        else if (ch >= '0' && ch <= '9') {
            digit++;
        }
        else {
            special++;
        }
    }

    printf("%d\n", upper);
    printf("%d\n", lower);
    printf("%d\n", digit);
    printf("%d\n", vowel);
    printf("%d\n", consonant);
    printf("%d\n", special);

    return 0;
}