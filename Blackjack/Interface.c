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

        printf("\nYour card is: 10 of %c\n", suits[suitTypePlayer]);
    }
    else
    {
        printf("    +-----+\n");
        printf("    |%c    |\n", suits[suitTypePlayer]);
        printf("    |  %c  |\n", displayValuePlayer);
        printf("    |    %c|\n", suits[suitTypePlayer]);
        printf("    +-----+\n");

        printf("\nYour card is: %c of %c\n", displayValuePlayer, suits[suitTypePlayer]);
    }

}

void PrintDealerCard(int suitTypeDealer, char displayValueDealer)
{
    char suits[4] = { spade, club, heart, diamond };

    printf("\n");

    if (displayValueDealer == '0')      //special case to handle 10s
    {
        printf("\n    +-----+");
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

    printf("Your final hand is:\n");
    printf("\n");

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

    printf("The dealer's final hand is:\n");
    printf("\n");

    if (displayValueDealer == '0')
    {
        printf("\n    +-----+");
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

//void StartGame()