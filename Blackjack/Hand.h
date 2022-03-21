
#pragma once

#include "Deck.h"

typedef struct hand {

	PCARD firstCard;

}HAND, *PHAND;

typedef struct handCard {
	PCARD nextCard;

};
int getHandTotal(PHAND);
void addCardToHand(PHAND, PCARD); //PCARD DOESNT EXIST YET *sweats profuesly*
void emptyHand(PHAND);
