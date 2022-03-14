//	Group 5 - Blackjack
//	Written by: Sebastian I.

#pragma once
#include <stdio.h>

#define NUMOFCARDS 52

typedef struct card 
{
	enum suit { SPADES, CLUBS, HEARTS, DIAMONDS };
	char value;
} CARD, *PCARD;

typedef struct deck
{
	struct card* deck;
} DECK, *PDECK;

void initialiseDeck(PDECK);
PDECK shuffleDeck(PDECK);
PCARD dealCard(PDECK);