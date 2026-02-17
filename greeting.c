#include <stdio.h>
#include<string.h>

int main() {
         char alpha[50];
         scanf("%s",&alpha);
         int code;
         if(strcmp(alpha,"hi")==0){
             code=1;
         }else if(strcmp(alpha,"hello")==0){
             code=2;
         }else if(strcmp(alpha,"hey")==0){
             code=3;
             
         }else{
             code=0;
         }
         switch(code){
             case 1:
               printf("Hi! how can I help you?\n");
            case 2:
                printf("Hello there!\n");
            case 3:
                printf("Hey, what's up?\n");
            default:
               printf("Nice to meet you.\n");
         }

}

