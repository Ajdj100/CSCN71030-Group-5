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
} CARD, *PCARD;

typedef struct deck
{
	PCARD card[NUMOFCARDS];
} DECK, *PDECK;

void initialiseDeck(PDECK);
void printDeck(PDECK);
PDECK shuffleDeck(PDECK);
PCARD dealCard(PDECK);