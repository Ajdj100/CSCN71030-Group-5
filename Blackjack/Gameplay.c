

#include "Gameplay.h"
#include "Dealer.h"


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
		hit(thePlayer, dealCard(theDeck));

		//hit twice to dealer
		hit(theDealer, dealCard(theDeck));
		hit(theDealer, dealCard(theDeck));

		//player gameplay loop
		do {

			//display dealer cards

			//display player cards
			printPlayerHand(getPlayerHand(thePlayer));

			//ask player for choice
			printf("\nmake a choice:\na: hit\nb: stand\n");			//THIS NEEDS TO BE UPDATED TO MATCH INTERFACE
			//get players choice
			char pchoice = (char)getc(stdin);										//THIS NEEDS INPUT CHECKING
			//check players choice
			switch (pchoice) {										//DOES THIS NEED A DEFAULT CASE??? MAYBE FOR INPUT CHECKING
				
				case 'a':		//if hit, deal a card to the player
					hit(thePlayer, dealCard(theDeck));
					break;
				case 'b':		//if stand, break this loop
					pturn = false;
				break;
			}

			//clear screen
			system("cls");

		} while (pturn);


		//dealer gameplay loop
		do {

			//perfom dealer evaluation and get dealer's choice
			char dchoice = dealerEval(theDealer);

			//check players choice
			switch (dchoice) {										//DOES THIS NEED A DEFAULT CASE??? MAYBE FOR INPUT CHECKING

			case 'a':		//if hit, deal a card to the player
				hit(theDealer, dealCard(theDeck));
				break;
			case 'b':		//if stand, break this loop
				dturn = false;
				break;
			}

		} while (dturn);

		//compare player score to dealer score

		//if the player score is higher than the dealers
		if (getHandTotal(getPlayerHand(thePlayer)) > getHandTotal(getPlayerHand(theDealer))) { 
			printf("Player wins");
		}
		else if (getHandTotal(getPlayerHand(thePlayer)) < getHandTotal(getPlayerHand(theDealer))) {
			printf("Dealer wins");
		}

		//if player score > dealer score

		printf("Play again?\n0. yes\n0. no");		//THIS NEEDS TO BE DONE LIKE THE REST OF THE INTERFACE
		int choice = getchar();

	} while (game);
}