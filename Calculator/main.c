#include <stdio.h>

int main(){
int choice = 0;
float num1 = 0.0f;
float num2 = 0.0f;

printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
printf("Enter the mathematical operation you want to perform : ");
scanf("%d", &choice);

if(choice == 1 ){
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    float sum = num1 + num2;
    printf("The sum of the numbers are : %.2f",sum);      
}
else if(choice == 2){
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    float subtrac = num1 - num2;
    printf("The subtraction of the numbers are : %.2f",subtrac);

}
else if(choice == 3){
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    float prod = num1*num2;
    printf("The product of the numbers are : %.2f", prod);
}
else if(choice == 4){
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    if(num2 == 0){
        printf("The division is invalid");
    }
    else{
        float quot = num1/num2;
    printf("The quotient of the numbers are : %.2f",quot);
    }
}
else{
    printf("Enter a valid operation");
}

    return 0;
}