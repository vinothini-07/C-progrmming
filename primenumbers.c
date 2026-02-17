#include <stdio.h>

int main() {
    int num, i = 2;
    int find = 0;

    scanf("%d", &num);

    if(num <= 1){
        printf("NO");
        return 0;
    }

    while(i*i<= num){   
        if(num % i == 0){
            find = 1;
            break;
        }
        i++;
    }

    if(find == 1){
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}

