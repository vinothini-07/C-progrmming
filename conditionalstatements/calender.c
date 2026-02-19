#include<stdio.h>
int main(){
    int month,year;
    scanf("%d",&month);
    scanf("%d",&year);
    switch(month){
        case 1:
        printf("31 days");
        printf("First Quadrant");
        break;
        case 2:
             if(year% 4 == 0 && year % 100 != 0) || (year % 400 == 0){
                printf("29 days");
                 printf("First Quadrant");
                 break;
             }
             else{
                printf("28 days");
                printf("First Quadrant");
                break;
             }

        case 3:
           printf("31 days");
           printf("First Quadrant");
           break;
        case 4:
             printf("30 days");
             printf("Second Quadrant");
             break;
        case 5:
            printf("31 days");
            printf("Second Quadrant");
            break;
        case 6:
            printf("30 days");
            printf("Second Quadrant");
            break;

        case 7:
             printf("31 days");
             printf("Third Quadrant"); 
             break;
        case 8:
             
            printf("31 days");
             printf("Third Quadrant"); 
             break;
        case 9:

              printf("30 days");
             printf("Third Quadrant"); 
             break;
        case 10:
              printf("31 days");
              printf("Fourth Quadrant");
              break;
        case 11:
              printf("30 days");
              printf("Fourth Quadrant");
              break;
        case 12:
              printf("31 days");
              printf("Fourth Quadrant");
              break;

    }
}