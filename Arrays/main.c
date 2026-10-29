#include <stdio.h>

int main(){
    //array-Fixed size collection of the same type of elements
    //      (similar to a variable but can hold more than one value)

    int numbers[]={10,20,30,40,50};
    char grades[]={'A','B','C','D','E'};

    numbers[0]=100;

    printf("%d\n",numbers[0]);
    printf("%c\n",grades[4]);

    for(int i=0; i<5;i++){
        printf("%c\t",grades[i]);
    }

    return 0;
}