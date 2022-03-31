#pragma once
#include <stdbool.h>
#include "Menu.h"


void PrintPlayerCard(int, char);
void PrintDealerCard(int, char);
void PrintPlayerFinalCards(int, char);
void PrintDealerFinalCards(int, char);
void PrintWinner();
void PrintLoser();

//typedef enum { SPADES, CLUBS, HEARTS, DIAMONDS } SUIT; //THIS EXISTS IN THE DECK MODULE ALREADY