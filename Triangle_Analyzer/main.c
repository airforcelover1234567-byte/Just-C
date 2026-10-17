#include <stdio.h>

float check(float fside, float sside, float tside){

    if(fside+sside>tside || sside+tside>fside || tside+fside>sside){
         printf("The triangle can be made");
            if(fside==sside==tside){
                printf("\nThe triangle is quilateral");
            }
            else if(fside==sside!=tside ||sside==tside!=fside || fside==tside!=sside ){
                printf("\nThe triangle is isosceles");
            }
            else{
                printf("\nThe triangle is scalene");
            }
         }
         else{
        printf("The triangle cannot be made");
    }
    }


int main(){
    float fside=0.0f;
    float sside=0.0f;
    float tside=0.0f;
    scanf("%f",&fside);
    scanf("%f",&sside);
    scanf("%f",&tside);
check(fside,sside,tside);

    return 0;
}