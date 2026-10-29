#include <stdio.h>

int main(){
    //array-Fixed size collection of the same type of elements
    //      (similar to a variable but can hold more than one value)

    int numbers[]={10,20,30,40,50,60,70,80,};
    char grades[]={'A','B','C','D','E'};

    // numbers[0]=100;

    // printf("%d\n",numbers[0]);
    // printf("%c\n",grades[4]);

    printf("%ld\n",sizeof(numbers));
    printf("%ld\n", sizeof(numbers[0]));

    int size=sizeof(numbers)/sizeof(numbers[0]);
        for(int i=0; i<size;i++){
        printf("%d\t",numbers[i]);
    }

    return 0;
}