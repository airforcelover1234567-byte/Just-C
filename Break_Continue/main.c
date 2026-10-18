#include <stdio.h>

int main(){
    int i,age;
    for(i=0; i<10; i++){
        printf("%d\nEnter your age:\n ",i);
        scanf("%d",&age);
       // if(age>10){
          //  break;  //this breaks the loop
                    //it is used in loops and switches
      //  }
       if(age>10){
        continue;
      }
    printf("We have not coem acrossa ny continue statements"); //it skips a few line of code and moves on to a next iteration
    }
    return 0;
}