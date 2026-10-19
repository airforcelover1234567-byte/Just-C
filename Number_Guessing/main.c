#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void retry(int chance){
            printf("Remaining attempts: %d\n",7-chance);
    if(chance==7){
        printf("You lost!"); 
    exit(EXIT_SUCCESS);  
    }
}

int main(){
    int choice,number;
    int chance=0;
    srand(time(0));
    number=(rand()%100)+1;

    do{
    printf("Enter your choice: ");
    scanf(" %d",&choice);
    if(choice==number){
        printf("You won\n");
    }
    else if(choice>100||choice<1){
        chance++;
        retry(chance);
            printf("Enter a number withing the range\n");
        }
    else if(choice>number){
            printf("Lower\n");
            chance++;
            retry(chance);

        }
        else if(choice<number){
            printf("Higher\n");
            chance++;
            retry(chance);

        }
    }while(choice!=number);
}
