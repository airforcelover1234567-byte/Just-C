#include <stdio.h>
#include <stdlib.h>

int main(){

    int waiting=0;
    int choice=0;
    int served=0;
    do{

    printf("\n1.Customer Arrives  2.Serve customer  3.Display queue  4.Number of customers served  5.Shut Down");
    printf("\nEnter the function you want to perform: ");
    scanf(" %d",&choice);
    switch(choice){
        case 1:
        waiting++;
        break;

        case 2:
        if(waiting>0){
             waiting--;
             served++;
        }else
            printf("There is no one on the line");
        
        
        break;

        case 3:
        printf("\n%d",waiting);
        break;

        case 4:
        printf("\n%d",served);
        break;

        case 5:
        exit(EXIT_SUCCESS);
        break;

        
        default:
        printf("\nEnter a proper function");
        break;


    }
    }while(choice!=5);
    
    return 0;
}