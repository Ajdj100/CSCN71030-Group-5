
#include "Dealer.h"

/// <summary>
/// The "brain" of the dealer, decides what action it will take
/// </summary>
/// <param name="theDealer">the player structure containing the dealer</param>
/// <returns>The dealer's decision on what action it will take</returns>
char dealerEval(PPLAYER theDealer) {
	PHAND dealerHand = getPlayerHand(theDealer);

	int handTotal = getHandTotal(dealerHand);

	if (handTotal < 17) {
		return 'a';
	}
	else {
		return 'b';
	}
}