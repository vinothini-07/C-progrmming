#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   if(n>=1 && n<=5){
       printf("Weak");
   }
   else if(n>=6 && n<=8){
       printf("Moderate");
   }
  
   else if(n>=9 && n<=12){
       printf("Strong");
   }
   else if(n>12){
       printf("VeryStrong");
   }
   else{
       printf("Invalid");
   }
   
    return 0;
}