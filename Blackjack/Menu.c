#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <process.h>
#include "Interface.h"
#include "Menu.h"
#define spade 06 
#define club 05 
#define diamond 04 
#define heart 03 

void PrintWelcome()
{
	printf("\n\n");
	yellow();
	printf("        ***********************************************************************************************\n");
	printf("        *                                                                                             *\n");
	printf("	*      _____ __   __ _____   _____  _____                                                     *\n");
	printf("	*     /     \\||   ||//    \\\\| ____|||    \\\\                                                   *\n");
	printf("	*     |  |  |||   ||||    ||||___  ||    ||                                                   *\n");
	printf("	*      \\ \\ \\ ||   ||||____//| ___| || ___//                                                   *\n");
	printf("	*     |  |  |||___||||      ||____ ||  \\\\                                                     *\n");
	printf("	*     \\_____/\\_____/||      |_____|||   \\\\                                                    *\n");

	printf("	*      _____  __          __      ______ __  __ ______    __      ______ __  __               *\n");
	printf("	*     ||    \\\\||	 //\\\\    / _____\\||  //|__   _|  //\\\\    / _____\\||  //               *\n");
	printf("	*     ||    //||	//  \\\\   ||      || //    | |   //  \\\\   ||      || //                *\n");
	printf("	*     ||===== ||       //____\\\\  ||      ||//  __ | |  //____\\\\  ||      ||//                 *\n");
	printf("	*     ||    \\\\||____  //======\\\\ ||_____ || \\\\ ||_| | //======\\\\ ||_____ || \\\\                *\n");
	printf("	*     ||____//||____|//        \\\\\\______/||  \\\\|____|//        \\\\\\______/||  \\\\               *\n");

	printf("	*      _____   ______        _____  _____   _____  _____  _____  ______ ___     __            *\n");
	printf("	*     //    \\\\/ _____\\      | ____|||    \\\\|_   _||_   _||_   _|//    \\\\||\\\\    ||            *\n");
	printf("	*     ||     |||            ||___  ||    ||  | |    | |    | |  ||    |||| \\\\   ||            *\n");
	printf("	*     ||____//||            | ___| ||    ||  | |    | |    | |  ||    ||||  \\\\  ||            *\n");
	printf("	*     ||      ||_____       || ____||    || _| |_   | |   _| |_ ||    ||||   \\\\ ||            *\n");
	printf("	*     ||      \\______/      |_____|||____//|_____|  |_|  |_____|\\\\____//||    \\\\||            *\n");

	printf("	*      _____ __   __ _____   _____   ______                                                   *\n");
	printf("	*     |_   _|||   ||||    \\\\||    \\\\//    \\\\ TM                                               *\n");
	printf("	*       | |  ||   ||||    ||||    //||    ||                                                  *\n");
	printf("	*       | |  ||   |||| ___//||===== ||    ||                                                  *\n");
	printf("	*       | |  ||___||||  \\\\  ||    \\\\||    ||                                                  *\n");
	printf("	*       |_|  \\_____/||   \\\\ ||____//\\\\____// %c %c %c %c                                          *\n", spade, club, diamond, heart);
	printf("        *                                                                                             *\n");
	printf("        *                                                                                             *\n");
	printf("        ***********************************************************************************************\n");
	reset();
}

void yellow()
{
	printf("\033[1;33m");
}

void reset()
{
	printf("\033[0m");
}

void MainMenu(int* scores)
{
	char option;
	bool loop = true;

	do {
		printf("\n         Enter a letter to select an option:\n");
		printf("             a. Start Game\n");
		printf("             b. How to Play\n");
		printf("             c. Leaderboard\n");
		printf("             d. Exit\n");
		printf("\n");

		option = getchar();
		fseek(stdin, 0, SEEK_END);

		printf("\n");

		switch (option)
		{
		case 'a':
			// Join game function
			printf("Starting game...\n\n");
			break;

		case 'b':
			PrintRules();
			break;

		case 'c':
			GenerateLB(scores);
			break;

		case 'd':
			loop = false;
			printf("Exiting game... Goodbye!\n\n");
			break;

		default:
			printf("Invalid input, please try again. \n\n");
			break;
		}
	} while (loop == true);

	return;
}

void PrintRules()
{
	system("cls");
	printf("\n\n	If you're new here, here are some rules to playing Blackjack:\n\n");
	printf("	Objective:\n	Get a hand adding up to 21 or less. Going over 21 will result in a BUST, which means the house wins.\n\n");
	printf("	Blackjack Terms: \n	HIT - Get another card to add to your hand.\n	STAND - Stick with your current hand, passing the turn to the house.\n	BUST - Going over 21, resulting in a loss.\n");
	printf("	BLACKJACK - Initial dealt hand adds up to 21 (Ace and Picture Card).\n	DRAW - Both the player and the dealer/house has the same value cards; no change in points.\n\n");
	printf("	Player: \n	1. The player will be dealt 2 cards.\n	2. If the player's initial hand has a total value less than 16, you must HIT. \n");
	printf("	3. No hand can contain more than 5 cards.\n	4. Any hand containing 5 cards and has not bust, automatically stands and wins.\n	5. If the player's initial hand is 21, that's a BLACKJACK and they automatically win. \n\n");
	printf("	House/Dealer: \n	1. The dealer or the house will be dealt 2 cards as well.\n	2. One card will be dealt face up, and the other face down.\n	3. The dealer can peak at the second card on his go. \n");
	printf("	4. If the dealer's hand adds up to the same as that of the player, it's a DRAW.\n\n");
	printf("	Card Values:\n	Ace - 1 or 11 (Ace is counted as 11 in the initial hand and 1 for any subsequent cards taken.)\n	Picture cards [J, Q, K] - 10\n\n");
	system("pause");
	system("cls");

	return;
}

void GenerateLB(int* scores)
{
	system("cls");
	printf("\n Here is how many times you have won the last 5 games:\n");

	printf("\n    ----------------------\n");

	printf("    |   Games   |  Wins  |\n");
	for (int i = 0; i < 5; i++)
	{
		printf("    ----------------------\n");
		printf("    | %9d | %6d |\n", i + 1, scores[i]);
		/*printf("\n%d. Rounds won: %d", i + 1, scores[i]);*/
	}
	printf("    ----------------------\n");

	//if (scores == NULL)
	//{
	//    printf("You have not played any games!\n");
	//}

	printf("\n Please note: Program only saves data of your last 5 games.\n\n");

	system("pause");
	system("cls");

}