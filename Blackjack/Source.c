#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include "Deck.h"
#include "Interface.h"
#define spade 06                 //Used to print spade symbol
#define club 05                  //Used to print club symbol
#define diamond 04               //Used to print diamond symbol
#define heart 03                 //Used to print heart symbol
#define MAX_LEN 128
//#define RESULTS "Blackjack.txt"  //File name is Blackjack

//void print_image(FILE* fptr);

int main(void) {

	//PCARD deck = initialiseDeck();
	////printDeck(deck);

	//char* filename = "image.txt";
	//FILE* fptr = NULL;

	//if ((fptr = fopen(filename, "r")) == NULL)
	//{
	//	fprintf(stderr, "error opening %s\n", filename);
	//	return 1;
	//}

	//print_image(fptr);

	//fclose(fptr);

	srand((unsigned)time(NULL)); //Generates random seed for rand() function
	PrintClub();
	PrintDiamond();
	system("pause");

	return 0;
}
//
//void print_image(FILE * fptr)
//{
//	char read_string[MAX_LEN];
//
//	while (fgets(read_string, sizeof(read_string), fptr) != NULL)
//		printf("%s", read_string);
//}
