
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

PHANDCARD createNewHandCard(CARD*);
PHANDCARD getFirstCard(PHAND);
PHANDCARD getNextCard(PHANDCARD);
PHANDCARD getLastCard(PHAND);
int getHandTotal(PHAND);
void addCardToHand(PHAND, CARD*);
void emptyHand(PHAND);
bool isHandEmpty(PHAND);