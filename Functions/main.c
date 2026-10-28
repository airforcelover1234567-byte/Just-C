#include <stdio.h>

void printing(){
    printf("PROGRAM TO ADD 2 NUMBERS!");
}
float sum(float num1, float num2){
    return num1+num2;
}
int main(){
    float num1,num2;
    printf("Enter the first number: \n");
    scanf("%f",&num1);
    printf("Enter the second number: \n");
    scanf("%f",&num2);
    printing();
    printf("The sum is %.2f\n", sum(num1,num2));
    
    return 0;
}