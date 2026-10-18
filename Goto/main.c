#include <stdio.h>

int main(){

    // label:
    // printf("Hello World ");
    // goto end;
    // goto label; //it goes to a specific label, it is mostly avoided
    // end:
    // printf("We are at the end");
int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d",i);
        for(int j = 0; j < 9; j++)
        {
            printf("Enter the number to exit\n");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end:
    
    return 0;
}