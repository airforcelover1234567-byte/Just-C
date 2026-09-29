#include <stdio.h>
#include <stdbool.h>


// a function is performed only if the condition is true
int main(){
bool isstudent = true;

    int age = 24;

    if(age >= 18){
        printf("You are an adult");
    }
    else if(age < 0){
        printf("You are not born yet");
    }
    else if (isstudent == true){
        printf("You are a student");
    }
    else{
        printf("You are a child");
    }

    return 0;
}