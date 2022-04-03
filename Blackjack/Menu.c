#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <time.h>
#include "Interface.h"
#include "Menu.h"
#include"Gameplay.h" 
#include "FileIO.h"
#define spade 06 
#define club 05 
#define diamond 04 
#define heart 03 

void sleep(unsigned int mseconds)
{
	clock_t goal = mseconds + clock();
	while (goal > clock())
		;
}

void PrintWelcome()
{

	printf("\n\n");
	red();
	printf("        ***********************************************************************************************\n");
	printf("        *                                                                                             *\n");
	sleep(100);
	printf("	*      _____ __   __ _____   _____  _____                                                     *\n");
	sleep(100);
	printf("	*     /     \\||   ||//    \\\\| ____|||    \\\\                                                   *\n");
	sleep(100);
	printf("	*     |  |  |||   ||||    ||||___  ||    ||                                                   *\n");
	sleep(100);
	printf("	*      \\ \\ \\ ||   ||||____//| ___| || ___//                                                   *\n");
	sleep(100);
	printf("	*     |  |  |||___||||      ||____ ||  \\\\                                                     *\n");
	sleep(100);
	printf("	*     \\_____/\\_____/||      |_____|||   \\\\                                                    *\n");
	sleep(100);
	reset();

	cyan();
	printf("	*      _____  __          __      ______ __  __ ______    __      ______ __  __               *\n");
	sleep(100);
	printf("	*     ||    \\\\||	 //\\\\    / _____\\||  //|__   _|  //\\\\    / _____\\||  //               *\n");
	sleep(100);
	printf("	*     ||    //||	//  \\\\   ||      || //    | |   //  \\\\   ||      || //                *\n");
	sleep(100);
	printf("	*     ||===== ||       //____\\\\  ||      ||//  __ | |  //____\\\\  ||      ||//                 *\n");
	sleep(100);
	printf("	*     ||    \\\\||____  //======\\\\ ||_____ || \\\\ ||_| | //======\\\\ ||_____ || \\\\                *\n");
	sleep(100);
	printf("	*     ||____//||____|//        \\\\\\______/||  \\\\|____|//        \\\\\\______/||  \\\\               *\n");
	sleep(100);
	reset();

	red();
	printf("	*      _____   ______        _____  _____   _____  _____  _____  ______ ___     __            *\n");
	sleep(100);
	printf("	*     //    \\\\/ _____\\      | ____|||    \\\\|_   _||_   _||_   _|//    \\\\||\\\\    ||            *\n");
	sleep(100);
	printf("	*     ||     |||            ||___  ||    ||  | |    | |    | |  ||    |||| \\\\   ||            *\n");
	sleep(100);
	printf("	*     ||____//||            | ___| ||    ||  | |    | |    | |  ||    ||||  \\\\  ||            *\n");
	sleep(100);
	printf("	*     ||      ||_____       || ____||    || _| |_   | |   _| |_ ||    ||||   \\\\ ||            *\n");
	sleep(100);
	printf("	*     ||      \\______/      |_____|||____//|_____|  |_|  |_____|\\\\____//||    \\\\||            *\n");
	sleep(100);
	reset();

	cyan();
	printf("	*      _____ __   __ _____   _____   ______                                                   *\n");
	sleep(100);
	printf("	*     |_   _|||   ||||    \\\\||    \\\\//    \\\\ ");
	printf("TM                                               *\n");
	sleep(100);
	printf("	*       | |  ||   ||||    ||||    //||    ||                                                  *\n");
	sleep(100);
	printf("	*       | |  ||   |||| ___//||===== ||    ||                                                  *\n");
	sleep(100);
	printf("	*       | |  ||___||||  \\\\  ||    \\\\||    ||                                                  *\n");
	sleep(100);
	printf("	*       |_|  \\_____/||   \\\\ ||____//\\\\____//");
	printf(" %c %c %c %c                                          *\n", spade, club, diamond, heart);
	sleep(100);
	printf("        *                                                                                             *\n");
	sleep(100);
	printf("        *                                                                                             *\n");
	sleep(100);
	printf("        ***********************************************************************************************\n");
	sleep(100);
	reset();
}

void red()
{
	printf("\033[0;31m");
}

void cyan()
{
	printf("\033[1;36m");
}

void reset()
{
	printf("\033[0m");
}

void MainMenu(PPLAYER thePlayer)
{
	char option;
	//char* username = { "\0" };
	bool loop = true;

	sleep(100);
	printf("\n	 Hey there, %s!\n", getPlayerName(thePlayer));

	do {
		sleep(100);
		printf("\n         Enter a letter to select an option:\n");
		sleep(100);
		printf("             a. Start Game\n");
		sleep(100);
		printf("             b. How to Play\n");
		sleep(100);
		printf("             c. Leaderboard\n");
		sleep(100);
		printf("             d. Exit\n");
		sleep(100);
		printf("\n");

		fseek(stdin, 0, SEEK_END);
		option = getchar();
		fseek(stdin, 0, SEEK_END);

		printf("\n");

		switch (option)
		{
		case 'a':
			// Join game function
			printf("Starting game...\n\n");
			system("cls");

			gameplay(thePlayer);
			break;

		case 'b':
			PrintRules();
			break;

		case 'c':
			GenerateLB();
			break;

		case 'd':
			loop = false;
			printf("Exiting game... Goodbye %s!\n\n", getPlayerName(thePlayer));
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
	sleep(100);
	printf("	Objective:\n	Get a hand adding up to 21 or less. Going over 21 will result in a BUST, which means the house wins.\n\n");
	sleep(100);
	printf("	Blackjack Terms: \n	HIT - Get another card to add to your hand.\n	STAND - Stick with your current hand, passing the turn to the house.\n	BUST - Going over 21, resulting in a loss.\n");
	sleep(100);
	printf("	BLACKJACK - Initial dealt hand adds up to 21 (Ace and Picture Card).\n	DRAW - Both the player and the dealer/house has the same value cards; no change in points.\n\n");
	sleep(100);
	printf("	Player: \n	1. The player will be dealt 2 cards.\n	2. If the player's initial hand has a total value less than 16, you must HIT. \n");
	sleep(100);
	printf("	3. No hand can contain more than 5 cards.\n	4. Any hand containing 5 cards and has not bust, automatically stands and wins.\n	5. If the player's initial hand is 21, that's a BLACKJACK and they automatically win. \n\n");
	sleep(100);
	printf("	House/Dealer: \n	1. The dealer or the house will be dealt 2 cards as well.\n	2. One card will be dealt face up, and the other face down.\n	3. The dealer can peak at the second card on his go. \n");
	sleep(100);
	printf("	4. If the dealer's hand adds up to the same as that of the player, it's a DRAW.\n\n");
	sleep(100);
	printf("	Card Values:\n	Ace - 1 or 11 (Ace is counted as 11 in the initial hand and 1 for any subsequent cards taken.)\n	Picture cards [J, Q, K] - 10\n\n");
	sleep(100);
	system("pause");
	system("cls");

	return;
}

void GenerateLB()
{
	int* scores = returnHighScores();
	system("cls");
	printf("\n Here is how many times you have won the last 5 games:\n");

	printf("\n    ----------------------\n");

	printf("    |   Games   |  Wins  |\n");
	for (int i = 0; i < 5; i++)
	{
		printf("    ----------------------\n");
		printf("    | %5d\t|  %3d\t |\n", i + 1, scores[i]);
	}
	printf("    ----------------------\n");

	if (scores == NULL)
	{
	    printf("You have not played any games!\n");
	}

	printf("\n Please note: Program only saves data of your last 5 games.\n\n");

	system("pause");
	system("cls");

}