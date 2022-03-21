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

    srand((unsigned)time(NULL)); //Generates random seed for rand() function
    PrintClub();
    PrintDiamond();
    system("pause");
    return 0;
}