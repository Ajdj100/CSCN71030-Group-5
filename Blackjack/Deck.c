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
			break;
		case(1):
			deck[i].suit = 0;
			deck[i].displayValue = '3';
			break;
		case(2):
			deck[i].suit = 0;
			deck[i].displayValue = '4';
			break;
		case(3):
			deck[i].suit = 0;
			deck[i].displayValue = '5';
			break;
		case(4):
			deck[i].suit = 0;
			deck[i].displayValue = '6';
			break;
		case(5):
			deck[i].suit = 0;
			deck[i].displayValue = '7';
			break;
		case(6):
			deck[i].suit = 0;
			deck[i].displayValue = '8';
			break;
		case(7):
			deck[i].suit = 0;
			deck[i].displayValue = '9';
			break;
		case(8):
			deck[i].suit = 0;
			deck[i].displayValue = '10';
			break;
		case(9):
			deck[i].suit = 0;
			deck[i].displayValue = 'J';
			break;
		case(10):
			deck[i].suit = 0;
			deck[i].displayValue = 'Q';
			break;
		case(11):
			deck[i].suit = 0;
			deck[i].displayValue = 'K';
			break;
		case(12):
			deck[i].suit = 0;
			deck[i].displayValue = 'A';
			break;
		case(13):
			deck[i].suit = 1;
			deck[i].displayValue = '2';
			break;
		case(14):
			deck[i].suit = 1;
			deck[i].displayValue = '3';
			break;
		case(15):
			deck[i].suit = 1;
			deck[i].displayValue = '4';
			break;
		case(16):
			deck[i].suit = 1;
			deck[i].displayValue = '5';
			break;
		case(17):
			deck[i].suit = 1;
			deck[i].displayValue = '6';
			break;
		case(18):
			deck[i].suit = 1;
			deck[i].displayValue = '7';
			break;
		case(19):
			deck[i].suit = 1;
			deck[i].displayValue = '8';
			break;
		case(20):
			deck[i].suit = 1;
			deck[i].displayValue = '9';
			break;
		case(21):
			deck[i].suit = 1;
			deck[i].displayValue = '10';
			break;
		case(22):
			deck[i].suit = 1;
			deck[i].displayValue = 'J';
			break;
		case(23):
			deck[i].suit = 1;
			deck[i].displayValue = 'Q';
			break;
		case(24):
			deck[i].suit = 1;
			deck[i].displayValue = 'K';
			break;
		case(25):
			deck[i].suit = 1;
			deck[i].displayValue = 'A';
			break;
		case(26):
			deck[i].suit = 2;
			deck[i].displayValue = '2';
			break;
		case(27):
			deck[i].suit = 2;
			deck[i].displayValue = '3';
			break;
		case(28):
			deck[i].suit = 2;
			deck[i].displayValue = '4';
			break;
		case(29):
			deck[i].suit = 2;
			deck[i].displayValue = '5';
			break;
		case(30):
			deck[i].suit = 2;
			deck[i].displayValue = '6';
			break;
		case(31):
			deck[i].suit = 2;
			deck[i].displayValue = '7';
			break;
		case(32):
			deck[i].suit = 2;
			deck[i].displayValue = '8';
			break;
		case(33):
			deck[i].suit = 2;
			deck[i].displayValue = '9';
			break;
		case(34):
			deck[i].suit = 2;
			deck[i].displayValue = '10';
			break;
		case(35):
			deck[i].suit = 2;
			deck[i].displayValue = 'J';
			break;
		case(36):
			deck[i].suit = 2;
			deck[i].displayValue = 'Q';
			break;
		case(37):
			deck[i].suit = 2;
			deck[i].displayValue = 'K';
			break;
		case(38):
			deck[i].suit = 2;
			deck[i].displayValue = 'A';
			break;
		case(39):
			deck[i].suit = 3;
			deck[i].displayValue = '2';
			break;
		case(40):
			deck[i].suit = 3;
			deck[i].displayValue = '3';
			break;
		case(41):
			deck[i].suit = 3;
			deck[i].displayValue = '4';
			break;
		case(42):
			deck[i].suit = 3;
			deck[i].displayValue = '5';
			break;
		case(43):
			deck[i].suit = 3;
			deck[i].displayValue = '6';
			break;
		case(44):
			deck[i].suit = 3;
			deck[i].displayValue = '7';
			break;
		case(45):
			deck[i].suit = 3;
			deck[i].displayValue = '8';
			break;
		case(46):
			deck[i].suit = 3;
			deck[i].displayValue = '9';
			break;
		case(47):
			deck[i].suit = 3;
			deck[i].displayValue = '10';
			break;
		case(48):
			deck[i].suit = 3;
			deck[i].displayValue = 'J';
			break;
		case(49):
			deck[i].suit = 3;
			deck[i].displayValue = 'Q';
			break;
		case(50):
			deck[i].suit = 3;
			deck[i].displayValue = 'K';
			break;
		case(51):
			deck[i].suit = 3;
			deck[i].displayValue = 'A';
			break;
		default:
			break;
		}
	}

	return deck;
}

void printDeck(CARD* deck)
{
	for (int i = 0; i < NUMOFCARDS; i++)
	{
		printf("Card: %c of %i\n", deck[i].displayValue, deck[i].suit);
	}
}

void shuffleDeck(CARD* deck)
{

}

CARD* dealCard(CARD* deck)
{

}