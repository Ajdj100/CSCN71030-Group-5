#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "Interface.h"
#include "Menu.h"
#include "Player.h"

//These will need to be sreplaced by the deck module
#define spade 06 
#define club 05 
#define diamond 04 
#define heart 03 
#define MAXNAME 15

int main(void) 
{
    //hard coded values to test the function that prints the cards. 
    char cardValuePlayer[] = { "4" };
    char cardValueDealer[] = { "A" };

    int x[] = { 10, 11, 12, 13, 30 };

    char username[MAXNAME] = { "\0" };
    char dealerName[6] = { "dealer" };

    printf("\n	Hello! What's your name?\n");
    scanf("%s", &username);
    getchar();
    system("cls");

    PPLAYER thePlayer = createPlayer(username);
    PPLAYER thePlayer = createPlayer(dealerName);


    PrintWelcome(); //prints intro

    bool loop = true;
    do {
        MainMenu(x, getPlayerName(thePlayer));

    } while
    //GenerateLB(x);

    //PrintPlayerCard(HEARTS, cardValuePlayer);
    //PrintDealerCard(DIAMONDS, cardValueDealer);

    //PrintPlayerFinalCards(HEARTS, cardValuePlayer);
    //PrintDealerFinalCards(DIAMONDS, cardValueDealer);

    //Hand(SPADES, cardValue);


    //PrintWinner();
    //PrintLoser();
 
    //system("pause");

    return 0;
}