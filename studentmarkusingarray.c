#include <stdio.h>

struct Student {
    char name[30];
    int marks;
};

int main() {
   
  struct Student students[5];
   
  for(int i=0;i<5;i++){
      scanf("%s %d",&students[i].name,&students[i].marks);
  }
    printf("Students scoring more than 75:\n");
    
    for(int i=0;i<5;i++){
        if(students[i].marks>75){
        printf("%s\n",students[i].name);
        }
    }
    
    return 0;
}
