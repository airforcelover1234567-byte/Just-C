#include <stdio.h>

int sum(int number){
    int i=10;
    int j=1;
    int digits;
    if(number>i){
        int numbr=number%i/j;
        i,j*10;
        int sumof;
        return sumof=number + sum(number-numbr);
    }
}

int main(){

    int num;
    printf("ENter a number: ");
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}