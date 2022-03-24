//	Group 5 - Blackjack
//	Written by: Sebastian I.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Deck.h"

CARD* initialiseDeck()
{
	CARD* deck[NUMOFCARDS];

	for (int i = 0; i < NUMOFCARDS; i++)
	{
		switch (i)
		{
		case(0):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '2';
			break;
		case(1):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '3';
			break;
		case(2):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '4';
			break;
		case(3):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '5';
			break;
		case(4):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '6';
			break;
		case(5):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '7';
			break;
		case(6):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '8';
			break;
		case(7):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '9';
			break;
		case(8):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = '10';
			break;
		case(9):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = 'J';
			break;
		case(10):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = 'Q';
			break;
		case(11):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = 'K';
			break;
		case(12):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 0;
			deck[i]->value = 'A';
			break;
		case(13):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '2';
			break;
		case(14):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '3';
			break;
		case(15):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '4';
			break;
		case(16):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '5';
			break;
		case(17):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '6';
			break;
		case(18):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '7';
			break;
		case(19):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '8';
			break;
		case(20):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '9';
			break;
		case(21):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = '10';
			break;
		case(22):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = 'J';
			break;
		case(23):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = 'Q';
			break;
		case(24):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = 'K';
			break;
		case(25):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 1;
			deck[i]->value = 'A';
			break;
		case(26):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '2';
			break;
		case(27):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '3';
			break;
		case(28):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '4';
			break;
		case(29):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '5';
			break;
		case(30):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '6';
			break;
		case(31):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '7';
			break;
		case(32):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '8';
			break;
		case(33):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '9';
			break;
		case(34):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = '10';
			break;
		case(35):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = 'J';
			break;
		case(36):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = 'Q';
			break;
		case(37):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = 'K';
			break;
		case(38):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 2;
			deck[i]->value = 'A';
			break;
		case(39):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '2';
			break;
		case(40):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '3';
			break;
		case(41):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '4';
			break;
		case(42):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '5';
			break;
		case(43):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '6';
			break;
		case(44):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '7';
			break;
		case(45):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '8';
			break;
		case(46):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '9';
			break;
		case(47):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = '10';
			break;
		case(48):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = 'J';
			break;
		case(49):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = 'Q';
			break;
		case(50):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = 'K';
			break;
		case(51):
			deck[i] = malloc(sizeof(CARD));
			deck[i]->suit = 3;
			deck[i]->value = 'A';
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
		printf("Card: %c of %i\n", deck[i].value, deck[i].suit);
	}
}

void shuffleDeck(CARD* deck)
{

}

CARD* dealCard(CARD* deck)
{

}

int getScoreValue(CARD theCard) {
	return 5;
}