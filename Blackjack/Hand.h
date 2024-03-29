
#pragma once

#include "Deck.h"
#include <stdlib.h>
#include <stdbool.h>

typedef struct handCard {

	CARD* thisCard;
	struct handCard* nextCard;

}HANDCARD, *PHANDCARD;

typedef struct hand {

	PHANDCARD firstCard;

}HAND, *PHAND;

PHAND createHand(void);
PHANDCARD createNewHandCard(CARD*);
PHANDCARD getFirstCard(PHAND);
PHANDCARD getNextCard(PHANDCARD);
PHANDCARD getLastCard(PHAND);
int getHandTotal(PHAND);
void addCardToHand(PHAND, CARD*);
void emptyHand(PHAND);
bool isHandEmpty(PHAND);
CARD getHandCard(PHANDCARD);


//THESE NEED TO WORK WITH DEBS PRINT FUNCTIONS
void printPlayerHand(PHAND); 
void printDealerHand(PHAND);
void printPlayerHandFinal(PHAND);
void printDealerHandFinal(PHAND);