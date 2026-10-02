#include <stdio.h>

int main()
{

    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;

    printf("Enter the first side(in cm): ");
    scanf("%f", &a);

    printf("Enter the second side(in cm): ");
    scanf("%f", &b);

    printf("Enter the third side(in cm): ");
    scanf("%f", &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Side lengths must be positive.\n");
    }
    else if (a + b > c && b + c > a && a + c > b)
    {
        printf("The sides can form a triangle\n");
        if (a == b && b == c)
        {
            printf("The triangle is a equilateral triangle\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is isosceles\n");
        }
        else
        {
            printf("The triangle is scalene\n");
        }
    }
    else
    {
        printf("The numbers cannot form a triangle");
    }

    return 0;
}