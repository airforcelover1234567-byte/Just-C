#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("-------------------------------\n");
    printf("POKEMON BATTLE\n");
    printf("-------------------------------\n");

    printf("Ash sent out Pickachu!\n");
    printf("Gary sent out Blastoise!\n");

    int pikhp = 100;
    int blashp = 100;
    int choice1 = 0;

    srand(time(0));
    do
    {
        printf("-------------------------------\n");
        printf("The HP of Pickachu is %d\n", pikhp);
        printf("The HP of Blastoise is %d\n", blashp);

        int Thunderbolt = (rand() % 8) + 18;
        int Quick_Attack = (rand() % 7) + 10;
        int Iron_tail = (rand() % 9) + 20;
        int Thunder = (rand() % 9) + 24;

        int Water_gun = (rand() % 7) + 10;
        int Hydro_pump = (rand() % 9) + 24;
        int Bite = (rand() % 7) + 13;
        int Water_pulse = (rand() % 7) + 15;
        int aichoice = (rand() % 4) + 1;

        printf("1.Thunderbolt  2.Quick Attack  3.Iron Tail  4.Thunder\n");
        printf("Which move should Pikachu Perform ?\n");
        scanf("%d", &choice1);

        switch (choice1)
        {

        case 1:
            blashp = blashp - Thunderbolt;
            printf("Pikachu used Thunderbolt\n");
            printf("The HP of blastoise is %d\n", blashp);
            break;

        case 2:
            blashp = blashp - Quick_Attack;
            printf("Pikachu used Quick Attack\n");
            printf("The HP of blastoise is %d\n", blashp);
            break;

        case 3:
            blashp = blashp - Iron_tail;
            printf("Pikachu used Iron Tail\n");
            printf("The HP of blastoise is %d\n", blashp);
            break;

        case 4:
            blashp = blashp - Thunder;
            printf("Pikachu used Thunder\n");
            printf("The HP of blastoise is %d\n", blashp);
            break;

        default:
            printf("Enter a valid move number");
        }

        switch (aichoice)
        {
        case 1:
            pikhp = pikhp - Water_gun;
            printf("Blastoise used Water Gun\n");
            printf("The HP of Pikachu is %d\n", pikhp);
            break;

        case 2:
            pikhp = pikhp - Hydro_pump;
            printf("Blastoise used Hydro Pump\n");
            printf("The HP of Pikachu is %d\n", pikhp);
            break;

        case 3:
            pikhp = pikhp - Bite;
            printf("Blastoise used Bite\n");
            printf("The HP of Pikachu is %d\n", pikhp);
            break;

        case 4:
            pikhp = pikhp - Water_pulse;
            printf("Blastoise used Water Pulse\n");
            printf("The HP of Pikachu is %d\n", pikhp);
            break;
        }
        if (blashp <= 0)
        {
            printf("You won");
            break;
        }
        else if (pikhp <= 0)
        {
            printf("You lost");
            break;
        }
    } while (blashp > 0);
    return 0;
}