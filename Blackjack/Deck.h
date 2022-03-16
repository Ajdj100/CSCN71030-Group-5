#pragma once
#include <stdio.h>

#define NUMOFCARDS 52

typedef struct card 
{
	enum suit { SPADES, CLUBS, HEARTS, DIAMONDS };
	char value;
}CARD, PCARD;

typedef struct deck
{
	struct card* deck;
};

