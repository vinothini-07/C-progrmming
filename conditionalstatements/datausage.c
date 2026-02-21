#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   if(n==0){
       printf("NoUsage");
   }
   else if(n==1 || n==2){
       printf(" LowUsage");
   }
   else if(n>=3 && n<=5){
       printf("NormalUsage");
   }
   else if(n>=6 && n<=10){
       printf(" HighUsage");
   }
   else if(n>10){
       printf(" OverLimit");
   }
   else{
       printf("InvalidUsage");
   }
   
    return 0;
}