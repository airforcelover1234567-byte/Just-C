#include <stdio.h>

int main(){
    int choice=0;
    printf("Enter a number to show the pattern on: ");
    scanf(" %d",&choice);

    for(int i=1;i<=choice;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}