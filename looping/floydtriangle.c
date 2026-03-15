#include <stdio.h>

int main() {
    int rows, i, j;
    int num = 1;
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            if(i % 2 != 0) {  
                printf("%d ", num);
                num++;
            } 
            else {           
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}