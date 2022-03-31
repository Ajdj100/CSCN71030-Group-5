//	Group 5 - Blackjack
//	Written by: Sebastian I.

#pragma once
#include <stdio.h>
#include <stdbool.h>

#define NUMOFCARDS 52
#define MAX_SHUFFLE 5

typedef enum { SPADES, CLUBS, HEARTS, DIAMONDS } SUIT;

typedef struct card
{
	SUIT suit;
	char displayValue;
	int scoreValue;
	bool inHand;
} CARD;

CARD* initialiseDeck();
void destroyDeck(CARD*);
void printDeck(CARD*);

char getDisplayValue(CARD);
int getScoreValue(CARD);

void shuffleDeck(CARD*);
void resetDeck(CARD*);
CARD* dealCard(CARD*);