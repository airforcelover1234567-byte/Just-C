#include <stdio.h>

int sum(int a, int b, int c){
    return a+b;
}

void printstar(int n){
    for(int i=0; i<10; i++){
        printf("%c","*");
    }
}

int main(){
    int a,b,c;
    a=9;
    b=81;
    c=sum(a,b,c);
    printf("%d",c);
    printstar(7);
    return 0;
}