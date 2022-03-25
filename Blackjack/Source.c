#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include "Interface.h"
#include "Menu.h"
#define spade 06 
#define club 05 
#define diamond 04 
#define heart 03 

int main(void) 
{
    //hard coded values to test the function that prints the cards. 
    char cardValuePlayer[] = { "4" };
    char cardValueDealer[] = { "A" };

    int x[] = { 10, 11, 12, 13, 14 };
    //GenerateLB(x);

    //PrintPlayerCard(HEARTS, cardValuePlayer);
   // PrintDealerCard(DIAMONDS, cardValueDealer);

    PrintPlayerFinalCards(HEARTS, cardValuePlayer);
    PrintDealerFinalCards(DIAMONDS, cardValueDealer);

    //Hand(SPADES, cardValue);
    //PrintWelcome();
    //MainMenu(x);
 
    //system("pause");

    return 0;
}