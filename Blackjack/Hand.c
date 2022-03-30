
#include "Hand.h"

/// <summary>
/// Allocates memory and copies target card into payload
/// </summary>
/// <param name="theCard">Target card to be copied</param>
/// <returns>Pointer to the new list package</returns>
PHANDCARD createNewHandCard(CARD* theCard) {
	PHANDCARD newHandCard = (PHANDCARD)calloc(1, sizeof(HANDCARD));
	if (newHandCard == NULL) {
		fprintf(stderr, "Error allocating memory");
	}
	newHandCard->thisCard = theCard;
	newHandCard->nextCard = NULL; 
	return newHandCard;
}

/// <summary>
/// Gets the sum of all the cards in the hand
/// </summary>
/// <param name="thisHand">The hand to sum</param>
/// <returns>the sum of the hand</returns>
int getHandTotal(PHAND thisHand) {
	PHANDCARD current = getFirstCard(thisHand);
	int counter = 0;
	while (current != NULL) {
		PHANDCARD next = getNextCard(current);
		counter += getScoreValue(*current->thisCard);										//NEED SEBASTIAN TO MAKE A GETTER FOR CARD VALUE FOR THIS 
		current = next;
	}
	return counter;
}

/// <summary>
/// Adds a card to a hand
/// </summary>
/// <param name="thisHand">The hand to add the card to</param>
/// <param name="thisCard">The card to add to the hand</param>
void addCardToHand(PHAND theHand, CARD* theCard) {
	PHANDCARD newCard = createNewHandCard(theCard);

	if (isHandEmpty(theHand)) {
		theHand->firstCard = newCard;
	}
	else {
		PHANDCARD lastCard = getLastCard(theHand);
		lastCard->nextCard = newCard;
	}
	return;

}

/// <summary>
/// destroys all cards in hand
/// </summary>
/// <param name="theHand">hand to empty</param>
void emptyHand(PHAND theHand) {
	PHANDCARD current = getFirstCard(theHand);

	while (current != NULL) {
		PHANDCARD next = getNextCard(current);
		free(current->thisCard)
		free(current);
		current = NULL;
		current = next;
	}
}

PHANDCARD getFirstCard(PHAND theHand) {
	return theHand->firstCard;
}

/// <summary>
/// Gets the next card from the hand linked list
/// </summary>
/// <param name="theCard">The target card to get the next card from</param>
/// <returns>Pointer to the next card in the list</returns>
PHANDCARD getNextCard(PHANDCARD theCard) {
	return theCard->nextCard;
}

/// <summary>
/// Gets the last card in the hand
/// </summary>
/// <param name="theHand">The target hand to get the card from</param>
/// <returns>Pointer to last card in hand</returns>
PHANDCARD getLastCard(PHAND theHand) {
	PHANDCARD current = getFirstCard(theHand);

	if (current == NULL)
		return current;

	PHANDCARD next = getNextCard(current);

	while (next != NULL) {
		current = next;
		next = getNextCard(current);
	}

	theHand->firstCard = NULL;

	return current;
}

/// <summary>
/// Ckecks if there are any cards in the hand
/// </summary>
/// <param name="theHand">The target hand to check</param>
/// <returns></returns>
bool isHandEmpty(PHAND theHand) {
	if (theHand->firstCard == NULL)
		return true;
	else
		return false;
}

PHAND createHand() {
	PHAND newHand = (PHAND)calloc(1, sizeof(HAND));
	if (newHand == NULL)
		exit(1);

	return newHand;
}


void printPlayerHand(PHAND theHand) {

	PHANDCARD current = getFirstCard(theHand);
	PHANDCARD next;
	while (current != NULL) {
		printf("PRINT DA BABY\n");

		//DebsPrintFunction(current->thisCard->suit, current->thisCard->value);
		
		next = getNextCard(current);

		if (next != NULL)
			current = next;
		else
			return;
	}

}

void printDealerHand(PHAND theHand) {

	PHANDCARD current = getFirstCard(theHand);
	PHANDCARD next;
	while (current != NULL) {
		printf("PRINT DA BABY\n");

		//DebsPrintFunction(current->thisCard->suit, current->thisCard->value);

		next = getNextCard(current);

		if (next != NULL)
			current = next;
		else
			return;
	}

}

void printPlayerHandFinal(PHAND theHand) {

	PHANDCARD current = getFirstCard(theHand);
	PHANDCARD next;
	while (current != NULL) {
		printf("PRINT DA BABY\n");

		//DebsPrintFunction(current->thisCard->suit, current->thisCard->value);

		next = getNextCard(current);

		if (next != NULL)
			current = next;
		else
			return;
	}

}

void printDealerHandFinal(PHAND theHand) {

	PHANDCARD current = getFirstCard(theHand);
	PHANDCARD next;
	while (current != NULL) {
		printf("PRINT DA BABY\n");

		//DebsPrintFunction(current->thisCard->suit, current->thisCard->value);

		next = getNextCard(current);

		if (next != NULL)
			current = next;
		else
			return;
	}

}