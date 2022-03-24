#pragma once

#include "Hand.h"
#include "Deck.h"
#include <string.h>

typedef struct player {

	PHAND hand;
	int score;
	char* name;

}PLAYER, *PPLAYER;

PPLAYER createPlayer(char*);
PHAND getPlayerHand(PPLAYER);
char* getPlayerName(PPLAYER);
int getPlayerScore(PPLAYER);
void hit(PPLAYER, CARD*);
bool stand(void);
void increaseScore(PPLAYER);
void decreaseScore(PPLAYER);