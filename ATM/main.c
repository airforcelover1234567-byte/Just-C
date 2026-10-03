#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void statement(){
    printf("\n1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4.Change PIN \n5.Exit");
}

int main(){
    int PIN=1977;
    int mypin=0;
    int choice=0;
    float balance = 100000;
    char retry1[5]="";
    printf("Enter your PIN: ");
    scanf(" %d",&mypin);

    if(mypin==PIN){
        printf("Login Successfull!");
        statement();
        printf("\nChoose your option: ");
        scanf(" %d",&choice);
        switch(choice){
    case 1:
    printf("\nYour balance is %.2f",balance);
    break;

    case 2:
    float deposit=0.0f;
    printf("Enter the amount you want to deposit: ");
    scanf(" %f",&deposit);
    float balancedep=balance+deposit;

    printf("\nYour balance after deposition is %.2f",balancedep);
    break;

    case 3:
    float withdraw=0.0f;
    printf("Enter the amount you want to withdraw");
    scanf(" %f",&withdraw);
    float balancewit=balance-withdraw;

    printf("\nYour balance after withdrawal is %.2f",balancewit);
    break;

    case 4:
    int newpin = 0;
    printf("\nEnter the new pin: ");
    scanf(" %d",&newpin);
    printf("\nConfirm the new pin: ");
    scanf(" %d",&newpin);
    mypin=newpin;
    break;

    case 5:
    exit(EXIT_SUCCESS);
    break;

    default:
    printf("Enter a proper function");
        }
    }
    else{
        printf("Access Denied");
        mypin++;
        printf("\nDo you want to try again(1.yes 2.no): ");
        fgets(retry1, sizeof(retry1), stdin);
        retry1[strlen(retry1)-1] ='\0';
            if(retry1=="yes"){
                
            }
    }
    



    }
