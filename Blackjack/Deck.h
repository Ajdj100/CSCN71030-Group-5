//	Group 5 - Blackjack
//	Written by: Sebastian I.

#pragma once
#include <stdio.h>
#include <stdbool.h>

#define NUMOFCARDS 52

typedef enum { SPADES, CLUBS, HEARTS, DIAMONDS } SUIT;

typedef struct card
{
	SUIT suit;
	char displayValue;
	int scoreValue;
	bool inHand;
} CARD;

CARD* initialiseDeck();
void printDeck(CARD*);
void shuffleDeck(CARD*);
CARD* dealCard(CARD*);