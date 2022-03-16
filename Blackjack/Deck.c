//	Group 5 - Blackjack
//	Written by: Sebastian I.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Deck.h"

void initialiseDeck(PCARD deck)
{
	//deck = malloc(sizeof(PDECK));

	for (int i = 0; i < NUMOFCARDS; i++)
	{
		switch (i)
		{
		case(0):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '2';
			break;
		case(1):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '3';
			break;
		case(2):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '4';
			break;
		case(3):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '5';
			break;
		case(4):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '6';
			break;
		case(5):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '7';
			break;
		case(6):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '8';
			break;
		case(7):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '9';
			break;
		case(8):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = '10';
			break;
		case(9):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = 'J';
			break;
		case(10):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = 'Q';
			break;
		case(11):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = 'K';
			break;
		case(12):
			deck = malloc(sizeof(CARD));
			deck->suit = 0;
			deck->value = 'A';
			break;
		case(13):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '2';
			break;
		case(14):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '3';
			break;
		case(15):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '4';
			break;
		case(16):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '5';
			break;
		case(17):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '6';
			break;
		case(18):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '7';
			break;
		case(19):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '8';
			break;
		case(20):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '9';
			break;
		case(21):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = '10';
			break;
		case(22):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = 'J';
			break;
		case(23):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = 'Q';
			break;
		case(24):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = 'K';
			break;
		case(25):
			deck = malloc(sizeof(CARD));
			deck->suit = 1;
			deck->value = 'A';
			break;
		case(26):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '2';
			break;
		case(27):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '3';
			break;
		case(28):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '4';
			break;
		case(29):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '5';
			break;
		case(30):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '6';
			break;
		case(31):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '7';
			break;
		case(32):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '8';
			break;
		case(33):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '9';
			break;
		case(34):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = '10';
			break;
		case(35):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = 'J';
			break;
		case(36):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = 'Q';
			break;
		case(37):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = 'K';
			break;
		case(38):
			deck = malloc(sizeof(CARD));
			deck->suit = 2;
			deck->value = 'A';
			break;
		case(39):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '2';
			break;
		case(40):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '3';
			break;
		case(41):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '4';
			break;
		case(42):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '5';
			break;
		case(43):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '6';
			break;
		case(44):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '7';
			break;
		case(45):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '8';
			break;
		case(46):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '9';
			break;
		case(47):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = '10';
			break;
		case(48):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = 'J';
			break;
		case(49):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = 'Q';
			break;
		case(50):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = 'K';
			break;
		case(51):
			deck = malloc(sizeof(CARD));
			deck->suit = 3;
			deck->value = 'A';
			break;
		default:
			break;
		}
	}
}

void printDeck(PCARD deck)
{
	for (int i = 0; i < NUMOFCARDS; i++)
	{
		printf("Card: %c of %i\n", deck[i].value, deck[i].suit);
	}
}

void shuffleDeck(PCARD deck)
{

}

PCARD dealCard(PCARD deck)
{

}