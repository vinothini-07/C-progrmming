#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("Super Lucky");
        return 0;
    }
    if(n%3==0){
        printf("Lucky");
        return 0;
    }
    if(n%5==0){
        printf("Very Lucky");
        return 0;
    }
    else{
        printf("Unlucky");
    }
}