

#include "Gameplay.h"


void gameplay(PPLAYER thePlayer) {

	char dealerName[6] = { "dealer" };

	PPLAYER theDealer = createPlayer(dealerName);
	CARD* theDeck = { initialiseDeck() };

	bool game = true;
	bool pturn = true;
	bool dturn = true;

	//broad gameplay loop
	do {
		pturn = true;
		dturn = true;

		//reset the deck

		//shuffle the deck
		shuffleDeck(theDeck);
		
		//clear hands
		cleanHand(thePlayer);
		cleanHand(theDealer);

		//hit twice to player
		hit(thePlayer, dealCard(theDeck));
		hit(thePlayer, dealCard(theDeck));		//BUG HERE?

		//hit twice to dealer
		hit(theDealer, dealCard(theDeck));
		hit(theDealer, dealCard(theDeck));

		//player gameplay loop
		do {

			//display dealer and player cards
			printPlayerHand(getPlayerHand(thePlayer));

			//ask player for choice
			printf("make a choice:\na: hit\nb: stand\n");			//THIS NEEDS TO BE UPDATED TO MATCH INTERFACE
			//get players choice
			char pchoice = (char)getc(stdin);										//THIS NEEDS INPUT CHECKING
			//check players choice
			switch (pchoice) {
				
				case 'a':		//if hit, deal a card to the player
					hit(thePlayer, dealCard(theDeck));
					break;
				case 'b':		//if stand, break this loop
					pturn = false;
				break;
				

			}
			//clear screen

		} while (pturn);


		//dealer gameplay loop
		do {

			//perfom dealer evaluation

			//set dturn to return value of dealer evaluation

			//if dturn is 0, hit to the dealer

		} while (dturn);

		//compare player score to dealer score

		//if player score > dealer score

		printf("Play again?\n0. yes\n0. no");		//THIS NEEDS TO BE DONE LIKE THE REST OF THE INTERFACE
		int choice = getchar();

	} while (game);
}