//	Group 5 - Blackjack
//	Written by: Sebastian I.

#pragma once
#include <stdio.h>

#define NUMOFCARDS 52

typedef enum { SPADES, CLUBS, HEARTS, DIAMONDS } SUIT;

typedef struct card 
{
	SUIT suit;
	char value;

}CARD;


CARD* initialiseDeck();
void printDeck(PCARD);
void shuffleDeck(PCARD);
CARD* dealCard(PCARD);