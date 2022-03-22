#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#define spade 06
#define club 05
#define diamond 04
#define heart 03

void PrintClub()
{
    char displayValue = 'Q';       //needs deck module to be: if (displayValue = getDisplayValue(card*))


    if (displayValue > 0)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  %c  |\n", displayValue);
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    if (displayValue == 0)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("| 10  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    printf("Your card is: %c of %c (Clubs)\n", displayValue, club);
}

void PrintDiamond()
{
    char displayValue = 'Q';       //needs deck module to be: if (displayValue = getDisplayValue(card*))

    //k = rand() % 13 + 1;

    if (displayValue > 0)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  %c  |\n", displayValue);
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (displayValue == 0)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("| 10  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    printf("Your card is: %c of %c (diamonds)\n", displayValue, diamond);

}

void PrintHeart()
{
    char displayValue = 'K';       //needs deck module to be: if (displayValue = getDisplayValue(card*))

    //k = rand() % 13 + 1;

    if (displayValue > 0)
    {
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  %c  |\n", displayValue);
        printf("|    %c|\n", heart);
        printf("-------\n");
    }

    if (displayValue == 0)
    {
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("| 10  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
    }

    printf("Your card is: %c of %c (hearts)\n", displayValue, heart);
}

void PrintSpade()
{
    char displayValue = 'J';       //needs deck module to be: if (displayValue = getDisplayValue(card*))

    //k = rand() % 13 + 1;

    if (displayValue > 0)
    {
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  %c  |\n", displayValue);
        printf("|    %c|\n", spade);
        printf("-------\n");
    }

    if (displayValue == 0)
    {
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("| 10  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
    }

    printf("Your card is: %c of %c (spades)\n", displayValue, spade);
}
