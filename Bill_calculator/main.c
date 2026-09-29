#include <stdio.h>


int main(){
float price;
int quantity;
float discount;

printf("Enter the price of the item :");
scanf("%f", &price);

printf("Enter the quantity of the item you bought : ");
scanf(" %d", &quantity);

printf("Enter the discount percentage you require on this items :");
scanf(" %f", &discount);

int finalbill=price*quantity;
float discountedbill = finalbill - discount/100*finalbill;

printf("The final discouted bill is %.2f", discountedbill);



    return 0;
}