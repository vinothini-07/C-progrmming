#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int l=n+10;
    while(n<=l){
        if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
            printf("leap year:%d\n",n);
    
        }
       else{
        printf("Non leap year:%d\n",n);
       }
       n++;
    }
    return 0;
}