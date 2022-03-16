#include <stdio.h>
#include "Deck.h"

int main(void) {
	printf("Hello world!\n");

	PCARD deck = initialiseDeck();
	printDeck(deck);
	return 0;
}