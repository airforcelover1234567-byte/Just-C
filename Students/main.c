#include <stdio.h>

int main(){
    int num,i,marks;
    int store[100]={0};

    printf("Enter the number of students: ");
    scanf(" %d",&num);

    for(i=0;i<num;i++){
        printf("Enter the marks of Student: ");
        scanf(" %d", &store[i]);
    }
    for(i=num-1;i>=0;i--){
        printf("%d ",store[i]);
    }
    return 0;
}