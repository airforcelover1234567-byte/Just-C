#include <stdio.h>

int main()
{
    // switch = an alternative to using many if - else statements
    // More efficient w/ fixed integer values

    // int dayoftheweek = 0;
    char dayoftheweek = '\0';

    printf("Enter a day of the week :(M, T , W, G, F, S, U) ");
    scanf(" %c", &dayoftheweek);

    switch (dayoftheweek)
    {
    case 'M':
        printf("The day is Monday");
        break;
    case 'T':
        printf("The day is Tuesday");
        break;
    case 'W':
        printf("The day is Wednesday");
        break;
    case 'G':
        printf("The day is Thursday");
        break;
    case 'F':
        printf("The day is Friday");
        break;
    case 'S':
        printf("The day is Saturday");
        break;
    case 'U':
        printf("The day is Sunday");
        break;
    default:
        printf("Please only enter a character that are given");
    }

    return 0;
}