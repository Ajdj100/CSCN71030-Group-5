//	Group 5 - Blackjack
//	Written by: Sebastian I.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Deck.h"

CARD* initialiseDeck()
{
	CARD* deck = (CARD*)(malloc(sizeof(CARD) * NUMOFCARDS));

	for (int i = 0; i < NUMOFCARDS; i++)
	{
		switch (i)
		{
		case(0):
			deck[i].suit = 0;
			deck[i].displayValue = '2';
			deck[i].scoreValue = 2;
			deck[i].inHand = false;
			break;
		case(1):
			deck[i].suit = 0;
			deck[i].displayValue = '3';
			deck[i].scoreValue = 3;
			deck[i].inHand = false;
			break;
		case(2):
			deck[i].suit = 0;
			deck[i].displayValue = '4';
			deck[i].scoreValue = 4;
			deck[i].inHand = false;
			break;
		case(3):
			deck[i].suit = 0;
			deck[i].displayValue = '5';
			deck[i].scoreValue = 5;
			deck[i].inHand = false;
			break;
		case(4):
			deck[i].suit = 0;
			deck[i].displayValue = '6';
			deck[i].scoreValue = 6;
			deck[i].inHand = false;
			break;
		case(5):
			deck[i].suit = 0;
			deck[i].displayValue = '7';
			deck[i].scoreValue = 7;
			deck[i].inHand = false;
			break;
		case(6):
			deck[i].suit = 0;
			deck[i].displayValue = '8';
			deck[i].scoreValue = 8;
			deck[i].inHand = false;
			break;
		case(7):
			deck[i].suit = 0;
			deck[i].displayValue = '9';
			deck[i].scoreValue = 9;
			deck[i].inHand = false;
			break;
		case(8):
			deck[i].suit = 0;
			deck[i].displayValue = '10';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(9):
			deck[i].suit = 0;
			deck[i].displayValue = 'J';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(10):
			deck[i].suit = 0;
			deck[i].displayValue = 'Q';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(11):
			deck[i].suit = 0;
			deck[i].displayValue = 'K';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(12):
			deck[i].suit = 0;
			deck[i].displayValue = 'A';
			deck[i].scoreValue = 11;
			deck[i].inHand = false;
			break;
		case(13):
			deck[i].suit = 1;
			deck[i].displayValue = '2';
			deck[i].scoreValue = 2;
			deck[i].inHand = false;
			break;
		case(14):
			deck[i].suit = 1;
			deck[i].displayValue = '3';
			deck[i].scoreValue = 3;
			deck[i].inHand = false;
			break;
		case(15):
			deck[i].suit = 1;
			deck[i].displayValue = '4';
			deck[i].scoreValue = 4;
			deck[i].inHand = false;
			break;
		case(16):
			deck[i].suit = 1;
			deck[i].displayValue = '5';
			deck[i].scoreValue = 5;
			deck[i].inHand = false;
			break;
		case(17):
			deck[i].suit = 1;
			deck[i].displayValue = '6';
			deck[i].scoreValue = 6;
			deck[i].inHand = false;
			break;
		case(18):
			deck[i].suit = 1;
			deck[i].displayValue = '7';
			deck[i].scoreValue = 7;
			deck[i].inHand = false;
			break;
		case(19):
			deck[i].suit = 1;
			deck[i].displayValue = '8';
			deck[i].scoreValue = 8;
			deck[i].inHand = false;
			break;
		case(20):
			deck[i].suit = 1;
			deck[i].displayValue = '9';
			deck[i].scoreValue = 9;
			deck[i].inHand = false;
			break;
		case(21):
			deck[i].suit = 1;
			deck[i].displayValue = '10';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(22):
			deck[i].suit = 1;
			deck[i].displayValue = 'J';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(23):
			deck[i].suit = 1;
			deck[i].displayValue = 'Q';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(24):
			deck[i].suit = 1;
			deck[i].displayValue = 'K';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(25):
			deck[i].suit = 1;
			deck[i].displayValue = 'A';
			deck[i].scoreValue = 11;
			deck[i].inHand = false;
			break;
		case(26):
			deck[i].suit = 2;
			deck[i].displayValue = '2';
			deck[i].scoreValue = 2;
			deck[i].inHand = false;
			break;
		case(27):
			deck[i].suit = 2;
			deck[i].displayValue = '3';
			deck[i].scoreValue = 3;
			deck[i].inHand = false;
			break;
		case(28):
			deck[i].suit = 2;
			deck[i].displayValue = '4';
			deck[i].scoreValue = 4;
			deck[i].inHand = false;
			break;
		case(29):
			deck[i].suit = 2;
			deck[i].displayValue = '5';
			deck[i].scoreValue = 5;
			deck[i].inHand = false;
			break;
		case(30):
			deck[i].suit = 2;
			deck[i].displayValue = '6';
			deck[i].scoreValue = 6;
			deck[i].inHand = false;
			break;
		case(31):
			deck[i].suit = 2;
			deck[i].displayValue = '7';
			deck[i].scoreValue = 7;
			deck[i].inHand = false;
			break;
		case(32):
			deck[i].suit = 2;
			deck[i].displayValue = '8';
			deck[i].scoreValue = 8;
			deck[i].inHand = false;
			break;
		case(33):
			deck[i].suit = 2;
			deck[i].displayValue = '9';
			deck[i].scoreValue = 9;
			deck[i].inHand = false;
			break;
		case(34):
			deck[i].suit = 2;
			deck[i].displayValue = '10';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(35):
			deck[i].suit = 2;
			deck[i].displayValue = 'J';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(36):
			deck[i].suit = 2;
			deck[i].displayValue = 'Q';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(37):
			deck[i].suit = 2;
			deck[i].displayValue = 'K';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(38):
			deck[i].suit = 2;
			deck[i].displayValue = 'A';
			deck[i].scoreValue = 11;
			deck[i].inHand = false;
			break;
		case(39):
			deck[i].suit = 3;
			deck[i].displayValue = '2';
			deck[i].scoreValue = 2;
			deck[i].inHand = false;
			break;
		case(40):
			deck[i].suit = 3;
			deck[i].displayValue = '3';
			deck[i].scoreValue = 3;
			deck[i].inHand = false;
			break;
		case(41):
			deck[i].suit = 3;
			deck[i].displayValue = '4';
			deck[i].scoreValue = 4;
			deck[i].inHand = false;
			break;
		case(42):
			deck[i].suit = 3;
			deck[i].displayValue = '5';
			deck[i].scoreValue = 5;
			deck[i].inHand = false;
			break;
		case(43):
			deck[i].suit = 3;
			deck[i].displayValue = '6';
			deck[i].scoreValue = 6;
			deck[i].inHand = false;
			break;
		case(44):
			deck[i].suit = 3;
			deck[i].displayValue = '7';
			deck[i].scoreValue = 7;
			deck[i].inHand = false;
			break;
		case(45):
			deck[i].suit = 3;
			deck[i].displayValue = '8';
			deck[i].scoreValue = 8;
			deck[i].inHand = false;
			break;
		case(46):
			deck[i].suit = 3;
			deck[i].displayValue = '9';
			deck[i].scoreValue = 9;
			deck[i].inHand = false;
			break;
		case(47):
			deck[i].suit = 3;
			deck[i].displayValue = '10';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(48):
			deck[i].suit = 3;
			deck[i].displayValue = 'J';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(49):
			deck[i].suit = 3;
			deck[i].displayValue = 'Q';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(50):
			deck[i].suit = 3;
			deck[i].displayValue = 'K';
			deck[i].scoreValue = 10;
			deck[i].inHand = false;
			break;
		case(51):
			deck[i].suit = 3;
			deck[i].displayValue = 'A';
			deck[i].scoreValue = 11;
			deck[i].inHand = false;
			break;
		default:
			break;
		}
	}

	return deck;
}

void destroyDeck(CARD* deck)
{
	free(deck);
}

char getDisplayValue(CARD card)
{
	return card.displayValue;
}

int getScoreValue(CARD card)
{
	return card.scoreValue;
}

int getSuit(CARD card) {
	return card.suit;
}

void shuffleDeck(CARD* deck)
{
	srand(time(0));
	int swapIndex1;
	int swapIndex2;
	int timesToShuffle = (rand() % MAX_SHUFFLE);

	for (int i = 0; i < (NUMOFCARDS * timesToShuffle); i++)
	{
		swapIndex1 = rand() % NUMOFCARDS;
		swapIndex2 = rand() % NUMOFCARDS;

		CARD tempCard = deck[swapIndex1];
		deck[swapIndex1] = deck[swapIndex2];
		deck[swapIndex2] = tempCard;
	}

}

void resetDeck(CARD* deck)
{
	for (int i = 0; i < NUMOFCARDS; i++)
		deck[i].inHand = false;
}

CARD* dealCard(CARD* deck)
{
	for (int i = 0; i < NUMOFCARDS; i++)
	{
		if (deck[i].inHand == false)
		{
			deck[i].inHand = true;
			return &deck[i];
		}
	}
}

//Function only for testing initialization.
void printDeck(CARD* deck)
{
	for (int i = 0; i < NUMOFCARDS; i++)
	{
		printf("Card: %c of %i\n", deck[i].displayValue, deck[i].suit);
	}
}

// Test Code
//CARD* deck = initialiseDeck();
//
//printf("\nThe original deck:\n\n");
//printDeck(deck);
//shuffleDeck(deck);
//printf("\nThe shuffled deck:\n\n");
//printDeck(deck);