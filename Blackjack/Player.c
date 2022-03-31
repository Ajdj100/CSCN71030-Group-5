
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
/// <param name="">character ptr to the name of the new player</param>
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

/// <summary>
/// Gets the name of the player
/// </summary>
/// <param name="thePlayer"></param>
/// <returns></returns>
char* getPlayerName(PPLAYER thePlayer) {
	return thePlayer->name;
}

/// <summary>
/// Gets the score of a player
/// </summary>
/// <param name="thePlayer">The target player</param>
/// <returns>The numerical score of the player</returns>
int getPlayerScore(PPLAYER thePlayer) {
	return thePlayer->score;
}

/// <summary>
/// Increases the score of a player
/// </summary>
/// <param name="thePlayer"e target player</param>
void increaseScore(PPLAYER thePlayer) {
	thePlayer->score++;
	return;
}

/// <summary>
/// Decreases the score of a player
/// </summary>
/// <param name="thePlayer">The target player</param>
void decreaseScore(PPLAYER thePlayer) {
	thePlayer->score--;
	return;
}

/// <summary>
/// Empties the hand of a player
/// </summary>
/// <param name="thePlayer">The target player to empty the hand of</param>
void cleanHand(PPLAYER thePlayer) {
	emptyHand(getPlayerHand(thePlayer));
}