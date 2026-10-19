#include <stdio.h>
#include <stdlib.h>

void statement(){
    printf("\n1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4.Change PIN \n5.Exit");
}
void reuseatm(int reuse){
    printf("\nDo you want to use the ATM again?\n 1.Yes  2.No  ");
    scanf("%d",reuse);
}

int main(){
    int PIN=1977;
    int mypin=0;
    int choice=0;
    float balance = 100000;
    int retry=0;
    int chance=0;
    int reuse=0;

    do{
    printf("Enter your PIN: ");
    scanf(" %d",&mypin);

    if(mypin==PIN){
        printf("Login Successfull!");
        do{
        statement();
        printf("\nChoose your option: ");
        scanf(" %d",&choice);
        
        
        switch(choice){
            
    case 1:
    printf("\nYour balance is %.2f",balance);
    reuseatm(reuse);
    break;

    case 2:
    float deposit=0.0f;
    printf("Enter the amount you want to deposit: ");
    scanf(" %f",&deposit);
    balance=balance+deposit;

    printf("\nYour balance after deposition is %.2f",balance);
    reuseatm(reuse);
    break;

    case 3:
    float withdraw=0.0f;
    printf("Enter the amount you want to withdraw");
    scanf(" %f",&withdraw);
    balance=balance-withdraw;

    printf("\nYour balance after withdrawal is %.2f",balance);
    reuseatm(reuse);
    break;

    case 4:
    int newpin = 0;
    printf("\nEnter the new pin: ");
    scanf(" %d",&newpin);
    printf("\nConfirm the new pin: ");
    scanf(" %d",&newpin);
    mypin=newpin;
    reuseatm(reuse);
    break;

    case 5:
    exit(EXIT_SUCCESS);
    break;
        

    default:
    printf("Enter a proper function");
        
}
}while(reuse==1);
        }

    else{
        printf("\nDo you want to retry?\n 1.Yes 2.No ");
        scanf(" %d",&retry);
        
         chance++;
   if(chance==3){
    printf("You have used all of your attempts!");
    exit(EXIT_SUCCESS);
    }
}
}while(retry==1);
    

    
return 0;
    }
    



