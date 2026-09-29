#include <stdio.h>

int main(){

int number;

printf("Enter a 3 digit number: ");
scanf("%d", &number);

int firstdigit = number%10;
int seconddigit = (number%100)/10;
//int thirddigit = number/100;

//int reverseddigit= firstdigit*100 + seconddigit*10 + thirddigit;

//printf("The reversed number is %d",reverseddigit);

if(firstdigit=seconddigit){
    printf("The number is a palindrome");
}
else{
    printf("The number is not a palindrome");
}


    return 0;
}