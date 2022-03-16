//	Group 5 - Blackjack
//	Written by: Sebastian I.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Deck.h"

void initialiseDeck(PDECK deck)
{
	//deck = malloc(sizeof(PDECK));

	for (int i = 0; i < NUMOFCARDS; i++)
	{
		switch (i)
		{
		case(0):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '2';
			break;
		case(1):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '3';
			break;
		case(2):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '4';
			break;
		case(3):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '5';
			break;
		case(4):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '6';
			break;
		case(5):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '7';
			break;
		case(6):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '8';
			break;
		case(7):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '9';
			break;
		case(8):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = '10';
			break;
		case(9):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = 'J';
			break;
		case(10):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = 'Q';
			break;
		case(11):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = 'K';
			break;
		case(12):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 0;
			deck->card[i]->value = 'A';
			break;
		case(13):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '2';
			break;
		case(14):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '3';
			break;
		case(15):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '4';
			break;
		case(16):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '5';
			break;
		case(17):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '6';
			break;
		case(18):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '7';
			break;
		case(19):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '8';
			break;
		case(20):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '9';
			break;
		case(21):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = '10';
			break;
		case(22):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = 'J';
			break;
		case(23):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = 'Q';
			break;
		case(24):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = 'K';
			break;
		case(25):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 1;
			deck->card[i]->value = 'A';
			break;
		case(26):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '2';
			break;
		case(27):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '3';
			break;
		case(28):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '4';
			break;
		case(29):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '5';
			break;
		case(30):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '6';
			break;
		case(31):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '7';
			break;
		case(32):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '8';
			break;
		case(33):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '9';
			break;
		case(34):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = '10';
			break;
		case(35):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = 'J';
			break;
		case(36):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = 'Q';
			break;
		case(37):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = 'K';
			break;
		case(38):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 2;
			deck->card[i]->value = 'A';
			break;
		case(39):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '2';
			break;
		case(40):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '3';
			break;
		case(41):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '4';
			break;
		case(42):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '5';
			break;
		case(43):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '6';
			break;
		case(44):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '7';
			break;
		case(45):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '8';
			break;
		case(46):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '9';
			break;
		case(47):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = '10';
			break;
		case(48):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = 'J';
			break;
		case(49):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = 'Q';
			break;
		case(50):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = 'K';
			break;
		case(51):
			deck->card[i] = malloc(sizeof(CARD));
			deck->card[i]->suit = 3;
			deck->card[i]->value = 'A';
			break;
		default:
			break;
		}
	}
}

void printDeck(PDECK deck)
{
	for (int i = 0; i < NUMOFCARDS; i++)
	{
		//printf("Card: %c of %i\n", cards[i].value, cards[i].suit);
	}
}

PDECK shuffleDeck(PDECK deck)
{

}

PCARD dealCard(PDECK deck)
{

}