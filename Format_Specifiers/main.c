#include <stdio.h>

// Format Specifiers

int main()
{

    int age = 14;
    printf("%d\n", age);

    float price = 19.99;
    printf("%f\n", price);

    double pi = 3.1415926535;
    printf("%lf\n", pi);

    char currency = '$';
    printf("%c\n", currency);

    char name[] = "Rounak Roy";
    printf("%s\n", name);

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);

    // precision

    float price1 = 10.99;
    float price2 = 199.99;
    float price3 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}