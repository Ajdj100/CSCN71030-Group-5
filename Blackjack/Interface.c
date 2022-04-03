#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Interface.h"
#define spade 06
#define club 05
#define diamond 04
#define heart 03
#define suitLen 5

void PrintPlayerCard(int suitTypePlayer, char displayValuePlayer)
{
    char suits[4] = { spade, club, heart, diamond };

    if (displayValuePlayer == '0')      //special case to handle 10s
    {
        printf("\n    +-----+");
        printf("\n    |%c    |", suits[suitTypePlayer]);
        printf("\n    |  10 |");
        printf("\n    |    %c|", suits[suitTypePlayer]);
        printf("\n    +-----+\n");

        printf("\nYour card is: 10 of %c\n\n", suits[suitTypePlayer]);
    }
    else
    {
        printf("    +-----+\n");
        printf("    |%c    |\n", suits[suitTypePlayer]);
        printf("    |  %c  |\n", displayValuePlayer);
        printf("    |    %c|\n", suits[suitTypePlayer]);
        printf("    +-----+\n");

        printf("\nYour card is: %c of %c\n\n", displayValuePlayer, suits[suitTypePlayer]);
    }

}

void PrintDealerCard(int suitTypeDealer, char displayValueDealer)
{
    char suits[4] = { spade, club, heart, diamond };

    printf("\n");

    if (displayValueDealer == '0')      //special case to handle 10s
    {
        printf("    +-----+");
        printf("\n    |%c    |", suits[suitTypeDealer]);
        printf("\n    |  10 |");
        printf("\n    |    %c|", suits[suitTypeDealer]);
        printf("\n    +-----+\n");

        printf("\nThe dealer's first card is: 10 of %c\n", suits[suitTypeDealer]);
    }

    else
    {
        printf("    +-----+\n");
        printf("    |%c    |\n", suits[suitTypeDealer]);
        printf("    |  %c  |\n", displayValueDealer);
        printf("    |    %c|\n", suits[suitTypeDealer]);
        printf("    +-----+\n");

        printf("\nThe dealer's first card is: %c of %c\n", displayValueDealer, suits[suitTypeDealer]);
    }
}

void PrintPlayerFinalCards(int suitTypePlayer, char displayValuePlayer)
{
    char suits[4] = { spade, club, heart, diamond };

    if (displayValuePlayer == '0')
    {
        printf("\n    +-----+");
        printf("\n    |%c    |", suits[suitTypePlayer]);
        printf("\n    |  10 |");
        printf("\n    |    %c|", suits[suitTypePlayer]);
        printf("\n    +-----+\n");
    }

    else
    {
        printf("    +-----+\n");
        printf("    |%c    |\n", suits[suitTypePlayer]);
        printf("    |  %c  |\n", displayValuePlayer);
        printf("    |    %c|\n", suits[suitTypePlayer]);
        printf("    +-----+\n");
    }

    printf("\n");
}

void PrintDealerFinalCards(int suitTypeDealer, char displayValueDealer)
{
    char suits[4] = { spade, club, heart, diamond };

    if (displayValueDealer == '0')
    {
        printf("    +-----+");
        printf("\n    |%c    |", suits[suitTypeDealer]);
        printf("\n    |  10 |");
        printf("\n    |    %c|", suits[suitTypeDealer]);
        printf("\n    +-----+\n");

    }

    else
    {
        printf("    +-----+\n");
        printf("    |%c    |\n", suits[suitTypeDealer]);
        printf("    |  %c  |\n", displayValueDealer);
        printf("    |    %c|\n", suits[suitTypeDealer]);
        printf("    +-----+\n");
    }

    printf("\n");
}

void PrintWinner()
{
    cyan();
    printf("\n");
    sleep(90);
    printf("      _             _ _____ ___     _____     __ _____  _____    _\n");
    sleep(90);
    printf("      \\\\           //|_   _|||\\\\    ||||\\\\    |||  ___|||    \\\\ | |\n");
    sleep(90);
    printf("       \\\\    _    //   | |  || \\\\   |||| \\\\   ||| |__  ||    || | |\n");
    sleep(90);
    printf("        \\\\  /_\\  //    | |  ||  \\\\  ||||  \\\\  |||  __| || ___// |_|\n");
    sleep(90);
    printf("         \\\\// \\\\//    _| |_ ||   \\\\ ||||   \\\\ ||| |___ ||  \\\\    _  \n");
    sleep(90);
    printf("          \\/   \\/    |_____|||    \\\\||||    \\\\|||_____|||   \\\\  |_|\n\n");
    sleep(90);
    reset();
}

void PrintLoser()
{
    red();
    sleep(90);
    printf("\n");
    printf("	 _       ____   _____  _____  _____	     . - """""" - .\n");
    sleep(90);
    printf("	| |    //    \\\\/     \\| ____|||    \\\\	  .'          '.\n");
    sleep(90);
    printf("	| |    ||    |||  |  |||___  ||    ||	 /   O      O   \\\n");
    sleep(90);
    printf("	| |    ||    || \\ \\ \\ | ___| || ___//   :           `    :\n");
    sleep(90);
    printf("	| |___ ||    |||  |  |||____ ||  \\\\     :    .------.    :\n");
    sleep(90);
    printf("	|_____|\\\\____//\\_____/|_____|||   \\\\     \\  '        '  /\n");
    sleep(90);
    printf("						  '.          .'\n");
    sleep(90);
    printf("						    ' . ."""""". . '\n");
    sleep(90);
    reset();

}

bool PlayAgain()
{
    char choice;
    printf("Would you like to play again?\n");
    printf("a. Yes\n");
    printf("b. No\n");

    fseek(stdin, 0, SEEK_END);
    choice = getchar();
    fseek(stdin, 0, SEEK_END);

    switch (choice)
    {
    case 'a':
        sleep(200);
        system("cls");
        printf("\n\n        Shuffling deck...\n\n");
        sleep(500);
        system("cls");
        return true;

    case 'b':
        sleep(200);
        system("cls");
        printf("\n\n        Returning to main menu...\n\n");
        sleep(450);
        system("cls");
        return false;

    default:
        printf("Invalid input, please try again. \n\n");
        sleep(200);
        return PlayAgain();
        system("cls");
    }
}

void PrintTotalCards(int totalValue)
{
    printf("The total value of your cards is: %d \n\n", totalValue);
}

void PrintDealerTotalCards(int totalValue)
{
    printf("The total value of the dealer's cards is: %d \n\n", totalValue);
}