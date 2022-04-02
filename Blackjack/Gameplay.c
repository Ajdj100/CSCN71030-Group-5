

#include "Gameplay.h"
#include "Dealer.h"


void gameplay(PPLAYER thePlayer) {

	char dealerName[6] = { "dealer" };

	PPLAYER theDealer = createPlayer(dealerName);
	CARD* theDeck = { initialiseDeck() };

	bool game = true;
	bool pturn = true;
	bool dturn = true;

	//variables to store player scores
	int pscore = 0;
	int dscore = 0;
	//broad gameplay loop
	do {
		//clears the screen
		system("cls");

		//reset the gameplay variables
		pturn = true;
		dturn = true;
		pscore = 0;
		dscore = 0;

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
			printf("Dealer\n");
			printDealerHand(getPlayerHand(theDealer));

			printf("-------------------------------------\n");
			//display player cards
			printf("Player\n");
			printPlayerHand(getPlayerHand(thePlayer));
			printf("\n");
			PrintTotalCards(getHandTotal(getPlayerHand(thePlayer)));

			//ask player for choice
				printf("\nmake a choice:\na: hit\nb: stand\n");			//THIS NEEDS TO BE UPDATED TO MATCH INTERFACE

				//get players choice
				fseek(stdin, 0, SEEK_END);
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

			pscore = getHandTotal(getPlayerHand(thePlayer));

			//check for bust
			if (pscore > 21) {
				pscore = -1;
				pturn = false;
				dturn = false;
			}

			//clear screen
			system("cls");

		} while (pturn);


		//dealer gameplay loop
		while (dturn) {

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

			dscore = getHandTotal(getPlayerHand(theDealer));

			//check for bust
			if (dscore > 21) {
				dscore = -1;
				dturn = false;

			}

		}

		//CHECKING FOR WINNERS AT GAME END

		//check for busts
		if (pscore == -1) { //if player busts
			printf("Player bust!\nDealer wins\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
		}
		else if (dscore == -1) { //if the dealer busts
			printf("Dealer bust!\nPlayer wins\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
		}

		//check for score winners

		//if the player score is higher than the dealers
		else if (getHandTotal(getPlayerHand(thePlayer)) > getHandTotal(getPlayerHand(theDealer))) { 
			printf("Player wins\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
		}
		else if (getHandTotal(getPlayerHand(thePlayer)) < getHandTotal(getPlayerHand(theDealer))) {
			printf("Dealer wins\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
		}

		//if player score > dealer score

		game = PlayAgain();
		

	} while (game);
}