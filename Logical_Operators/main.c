#include <stdio.h>
#include <stdbool.h>

//logical operators - Used to combine or modify boolean expressions

// %%-and
// ||-or
// !-not

int main(){

int temp=0;
printf("Enter a temperature: ");
scanf("%d",&temp);

if(temp>0 && temp<30){
    printf("The tempertaure is good\n");
}
else{
    printf("The temperature is bad\n");
}

bool issunny=false;

if(!issunny){
    printf("It is cloudy outside\n");
}
else{
    printf("It is sunny outside\n");
}

    return 0;
}
