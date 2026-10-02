#include <stdio.h>
#include <stdbool.h>

int main()
{

    float price = 10.00;
    bool isstudent = true; // 10 percent discount
    bool issenior = true;  // 20 percent discount

    if (isstudent)
    {
        if (issenior)
        {

            printf("You get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price = price * 0.7;
        }
        else
        {
            printf("You get a student discount of 10%%");
            price = price * 0.9;
        }
    }
    else
    {
        printf("You get a senior discount of 20%%\n");
        price = price * 0.8;
    }

    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}