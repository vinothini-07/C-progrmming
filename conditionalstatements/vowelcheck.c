#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int result;

    printf("Enter a character: ");
    result = scanf(" %c", &ch);   
    if (result != 1) {
        printf("Invalid input!\n");
        return 1;
    }

  
    if (!isalpha(ch)) {
        printf("'%c' is not a letter.\n", ch);
    }
    else {
       
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("'%c' is a Vowel.\n", ch);
        else
            printf("'%c' is a Consonant.\n", ch);
    }

    return 0;
}