#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0;
    int count;
    scanf("%d",&num);
    if(num<0){
        printf("Invalid");
        return 0;
    }
     count=0;
     int real=num;
        while(num!=0){
        num=num/10;
        count++;
       }
    
    
    int rev;
    num=real;
    while(num!=0){
     rev=num%10;
     sum=sum+pow(rev,count);
     num=num/10;
     
    }
    if(sum==real){
        printf("Armstrong");
    }
    else{
        printf("NotArmstrong");
    }
    
}