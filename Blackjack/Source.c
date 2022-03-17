#include <stdio.h>
#include "Deck.h"

int main(void) {
	printf("Hello world!\n");

	CARD* deck = initialiseDeck();

	printf("\nThe original deck:\n\n");
	printDeck(deck);
	shuffleDeck(deck);
	printf("\nThe shuffled deck:\n\n");
	printDeck(deck);

	return 0;
}