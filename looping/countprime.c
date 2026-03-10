#include<stdio.h>
int main(){
    int n,prime,count=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
       prime=0;
       for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=1;
                    break;
                    }
          }
        
        if(prime==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}