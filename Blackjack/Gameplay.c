
#include "Interface.h"
#include "Gameplay.h"
#include "Dealer.h"
#include "FileIO.h"


void gameplay(PPLAYER thePlayer) {

	char dealerName[6] = { "dealer" };

	PPLAYER theDealer = createPlayer(dealerName);
	CARD* theDeck = { initialiseDeck() };
	QUEUE* q = queueInit();

	bool game = true;
	bool pturn = true;
	bool dturn = true;

	//variables to store player scores
	int pscore = 0;
	int dscore = 0;
	//broad gameplay loop
	do {
		//clears the screen
		//system("cls");		//clears menu when game starts

		//reset the gameplay variables
		pturn = true;
		dturn = true;
		pscore = 0;
		dscore = 0;

		//reset the deck
		resetDeck(theDeck);

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
			printf("  +----------+\n");
			printf("  |  Dealer  |\n");
			printf("  +----------+\n");
			printDealerHand(getPlayerHand(theDealer));

			printf("\n------------------------------------------\n\n");
			//display player cards
			printf("  +----------+\n");
			printf("  |  Player  |\n");
			printf("  +----------+\n\n");
			printPlayerHand(getPlayerHand(thePlayer));
			PrintTotalCards(getHandTotal(getPlayerHand(thePlayer)));

			//ask player for choice
				printf("HIT or STAND?\na: HIT\nb: STAND\n");			//THIS NEEDS TO BE UPDATED TO MATCH INTERFACE

				//get players choice
				bool input = false;
				fseek(stdin, 0, SEEK_END);
				char pchoice = (char)getc(stdin);										//THIS NEEDS INPUT CHECKING
				fseek(stdin, 0, SEEK_END);
				//check players choice
				do {
					switch (pchoice) {										//DOES THIS NEED A DEFAULT CASE??? MAYBE FOR INPUT CHECKING

					case 'a':		//if hit, deal a card to the player
						system("cls");
						printf("CLS 79\n");	//debug print to try and find a bug
						hit(thePlayer, dealCard(theDeck));
						input = true;
						break;
					case 'b':		//if stand, break this loop
						system("cls");
						pturn = false;
						input = true;
						printf("CLS 87\n");	//debug print THIS IS WHERE THE BUG IS, LINE 87!!!
						break;
					default:
						printf("Invalid input, please try again. \n\n");
						input = true;
						break;
					}
				} while (input == false);

			pscore = getHandTotal(getPlayerHand(thePlayer));

			//check for bust
			if (pscore > 21) {
				pscore = -1;
				pturn = false;
				dturn = false;
			}

			//clear screen
			//system("cls");		//clears screen before ending game

		} while (pturn);


		//dealer gameplay loop
		while (dturn) {

			//perfom dealer evaluation and get dealer's choice
			fseek(stdin, 0, SEEK_END);
			char dchoice = dealerEval(theDealer);
			fseek(stdin, 0, SEEK_END);

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
			//printf("Player bust!\nDealer wins\n");
			PrintLoser();
			printf("You BUST!\n\n");
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
			PrintDealerTotalCards(getHandTotal(getPlayerHand(theDealer)));
			printf("------------------------------------------\n\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			PrintTotalCards(getHandTotal(getPlayerHand(thePlayer)));

			//decrease player score
			decreaseScore(thePlayer);
		}
		else if (dscore == -1) { //if the dealer busts
			//printf("Dealer bust!\nPlayer wins\n");
			PrintWinner();
			printf("The Dealer BUST!\n\n");
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
			PrintDealerTotalCards(getHandTotal(getPlayerHand(theDealer)));
			printf("------------------------------------------\n\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			PrintTotalCards(getHandTotal(getPlayerHand(thePlayer)));

			//increase player score
			increaseScore(thePlayer);
		}

		//check for score winners

		//if the player score is higher than the dealers
		else if (getHandTotal(getPlayerHand(thePlayer)) > getHandTotal(getPlayerHand(theDealer))) { 
			//printf("Player wins\n");
			PrintWinner();
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
			PrintDealerTotalCards(getHandTotal(getPlayerHand(theDealer)));
			printf("------------------------------------------\n\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			PrintTotalCards(getHandTotal(getPlayerHand(thePlayer)));

			//handle score
			increaseScore(thePlayer);
		}
		else if (getHandTotal(getPlayerHand(thePlayer)) < getHandTotal(getPlayerHand(theDealer))) {
			//printf("Dealer wins\n");
			PrintLoser();
			//print dealer's final cards
			printf("The dealer's final hand is:\n");
			printf("\n");
			printDealerHandFinal(getPlayerHand(theDealer));
			PrintDealerTotalCards(getHandTotal(getPlayerHand(theDealer)));
			printf("------------------------------------------\n\n");
			//print player's final cards
			printf("Your final hand is:\n");
			printf("\n");
			printPlayerHandFinal(getPlayerHand(thePlayer));
			PrintTotalCards(getHandTotal(getPlayerHand(thePlayer)));

			//handle score
			decreaseScore(thePlayer);
		}

		game = PlayAgain();
		sleep(100);
		readQueueFromFile(q);
		saveQueueToFile(q, thePlayer->score);
		

	} while (game);

}