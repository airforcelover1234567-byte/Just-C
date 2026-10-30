#include <stdio.h>

int main(){
    int marks[5]={0};

    for(int j=0;j<5;j++){
            printf("Enter marks: \n");
         scanf("%d", &marks[j]);
    }

    for(int i=0; i<5; i++){
        printf("%d ",marks[i]);
    }

    return 0;
}