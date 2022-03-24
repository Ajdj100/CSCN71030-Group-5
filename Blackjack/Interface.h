#pragma once
#include <stdbool.h>
#include "Menu.h"


void PrintPlayerCard(int, char[]);
void PrintDealerCard(int, char[]);
void GenerateLB(int*);
void PrintPlayerFinalCards(int, char[]);
void PrintDealerFinalCards(int, char[]);

typedef enum { SPADES, CLUBS, HEARTS, DIAMONDS } SUIT;