#include <stdio.h>

int getmax(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int max=getmax(5,3);
    printf("The greater number is %d",max);


    return 0;
}