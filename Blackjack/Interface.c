#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include "Deck.h"
#define spade 06                 //Used to print spade symbol
#define club 05                  //Used to print club symbol
#define diamond 04               //Used to print diamond symbol
#define heart 03                 //Used to print heart symbol
//jack = 10, queen = 12, king = 13, ace = 1/11

void PrintClub()
{
    int k;

   // srand((unsigned)time(NULL)); //Generates random seed for rand() function
    k = rand() % 13 + 1;

    if (k <= 10 && k > 1) //If random number is 9 or less, print card with that number
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    if (k == 11)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  J  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    if (k == 11 || k == 1)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  A  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    if (k == 12)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  Q  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    if (k == 13)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  K  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }

    printf("Your card is: %d of %c (Clubs)\n", k, club);
}

void PrintDiamond()
{
    int k;

    k = rand() % 13 + 1;

    if (k <= 10 && k > 1) //If random number is 9 or less, print card with that number
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (k == 11)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (k == 11 || k == 1)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  A  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (k == 12)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  Q  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (k == 13)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  K  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    printf("Your card is: %d of %c (diamonds)\n", k, diamond);

   /* printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", diamond);
    printf("-------\n");

    printf("-------\n");
    printf("|%c    |\n", heart);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", heart);
    printf("-------\n");

    printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", spade);
    printf("-------\n");*/


}