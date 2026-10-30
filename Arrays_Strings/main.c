#include <stdio.h>
#include <string.h>

int main(){
    //Arrays and Strings

    char fruits[][10]={"Apple",
                        "Banana", 
                        "Coconut",};

    fruits[0][0]='e';
    fruits[0][4]='a';
    int size=sizeof(fruits)/ sizeof(fruits[0]);
    for(int i=0; i<size; i++){
        printf("%s ", fruits[i]);
    }

    char name[3][25]={0};
    int input;
    for(int j=0;j<3;j++){
        fgets(name[j], sizeof(name[j]), stdin);
        // name[j][strlen(name[j] -1)]="\0";
    }
    for(int j=0;j<3;j++){
        printf("%s", name[j]);
    }
    return 0;
}