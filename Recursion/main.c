#include <stdio.h>

int factorial(int number){
    if(number==1||number==0){
        return 1;
    }
    else{
        return (number * factorial(number-1));
    }
}

int main(){

    int num=0;
    printf("Enter the number you want the factorial of:");
    scanf(" %d",&num);
    printf("%d",factorial(num));
    return 0;
}