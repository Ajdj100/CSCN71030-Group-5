#include <stdio.h>
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Dealer.h"

int main(int argc, char *argv[]) {

	if (argc < 2) {
		printf("no argument provided");
	}

	CARD* card1 = (CARD*)calloc(1, sizeof(CARD));
	card1->value = 6;
	CARD* card2 = (CARD*)calloc(1, sizeof(CARD));
	card2->value = 3;
	card2->suit = HEARTS;

	PPLAYER thePlayer = createPlayer(argv[1]);
	PPLAYER theDealer = createPlayer("Dealer");
	hit(theDealer, card1);
	hit(theDealer, card2);
	hit(thePlayer, card1);
	hit(thePlayer, card1);

	cleanHand(thePlayer);

	hit(thePlayer, card2);


	dealerEval(thePlayer);
	return 0;
}