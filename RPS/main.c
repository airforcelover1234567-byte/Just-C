#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(0));
int computerchoice=(rand()%3)+1;
int mychoice=0;
printf("\nWhat do you want to play ?\n1.Rock 2.Paper 3.Scissors ");
scanf(" %d", &mychoice);

if(mychoice==1 && computerchoice==3){
    printf("\nThe computer played scissors");
    printf("\nYou won");
}
else{
    printf("\nThe computer played scissors");
    printf("\nYou lost");
}
//if(mychoice==2 && computerchoice==1){
   // printf("\nThe computer played rock");
    //printf("\nYou won");
//}
//else{
   // printf("\nThe computer played rock");
    //printf("\nYou lost");
//}
//if(mychoice==3 && computerchoice==2){
   // printf("\nThe computer played paper");
    //printf("\nYou won");
//}
//else{
    //printf("\nThe computer played paper");
   // printf("\nYou lost");
//}
return 0;
}