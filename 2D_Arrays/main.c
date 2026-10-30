#include <stdio.h>

int main(){
    //2d array- An array where each element is within a {}
    //array[][]={{},{},{}};

    int numbers[][3]={{1,2,3}
                     ,{4,5,6}
                     ,{7,8,9}};

    for(int i=0;i<=2;i++){ //rows
        for(int j=0;j<=2;j++){ //columns
            printf("%d  ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}