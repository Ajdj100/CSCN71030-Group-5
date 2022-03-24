#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <process.h>
#include "Interface.h"
#include "Menu.h"

void PrintWelcome()
{
	printf("\n\n");
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
	printf("	*       |_|  \\_____/||   \\\\ ||____//\\\\____//                                                  *\n");
	printf("        *                                                                                             *\n");
	printf("        *                                                                                             *\n");
	printf("        ***********************************************************************************************\n");
}
void MainMenu(int* scores)
{
	char option;
	bool loop = true;

	do {
		printf("\n         Enter a letter to select an option:\n");
		printf("             a. Join Game\n");
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
			printf("Joining game...\n\n");
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
	printf("Since you're new here, here are some rules to playing Blackjack:\n");
	printf("Firstly,");

	system("pause");

	return;
}