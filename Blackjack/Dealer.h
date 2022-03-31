#pragma once

#include "Player.h"
#include "Hand.h"

typedef enum { HIT, STAND };

char dealerEval(PPLAYER);

/*
* The dealer will be implemented as a player with no name or score
* Only the hand will be used by the dealer
* 
* if the dealer returns 0, hit to the dealer
* if the dealer returns 1, stand
*/