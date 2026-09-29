#include <stdio.h>
#include <stdbool.h>

//variables

int main(){

int age = 14;
int year = 2026;


printf("The year is %d\n", year);
printf("You are %d years old\n",age);

float Gpa = 2.5;
printf("Your gpa is %.2f\n", Gpa);

float price = 19.99;
printf("The price is $%f\n", price);

double pi = 3.1415926535897932;
printf("The value of pi is %.15lf\n",pi);

double e = 2.718281828459045;
printf("The value of euler's number is %.15lf\n",e);


char currency = '$';
char symbol = '!';

printf("Your favourite currency is %c\n", currency);
printf("Your favourite symbol is %c\n", symbol);

char name[] = "Rounak Roy";
printf("Your name is %s\n", name);

bool isonline = true;
printf("You are online: %d\n", isonline);

if(isonline){
    printf("You are online");
} 
else{
    printf("You are offline");

}




    return 0;
}
