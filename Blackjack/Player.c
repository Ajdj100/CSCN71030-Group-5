
#include "Player.h"

void hit(PPLAYER thePlayer, CARD* theCard) {\

	PHAND theHand = getPlayerHand(thePlayer);
	addCardToHand(theHand, theCard);

	return;
}

PHAND getPlayerHand(PPLAYER thePlayer) {
	return thePlayer->hand;
}

/// <summary>
/// Creates a new player and initializes its variables
/// </summary>
/// <param name=""></param>
/// <returns>pointer to the created player</returns>
PPLAYER createPlayer(char* nameArg) {
	PPLAYER newPlayer = (PPLAYER)calloc(1, sizeof(PLAYER));
	if (newPlayer == NULL)
		exit(1);

	newPlayer->hand = createHand();

	newPlayer->name = (char*)calloc(1, sizeof(char)*strlen(nameArg));
	newPlayer->name = nameArg;

	return newPlayer;
}

void setName(PPLAYER thePlayer, char* newName) {

	thePlayer->name = newName;

	return;
}