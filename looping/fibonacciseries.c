#include<stdio.h>
int main(){
    int sum=0;
    int n,n1=0,n2=1;
    scanf("%d",&n);
       if(n<0){
            printf("Invalid");
            return 0;
        }
    for(int i=0;i<n;i++){
        printf("%d ",n1);
        int sum=n1+n2;
        n1=n2;
        n2=sum;
        }
    
    return 0;
}