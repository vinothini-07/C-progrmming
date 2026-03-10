#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int index=-1;
    int r,l,i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        l=0, r=0;
        for(int j=0;j<i;j++){
            l=l+arr[j];
        }
        for(int k=i+1;k<n;k++){
            
            r=r+arr[k];
        }
    
    if(r==l){
         index=i;
         break;
     }
    }
    printf("\n%d ",index);
}