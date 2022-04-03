#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "Interface.h"
#include "Menu.h"
#include "Player.h"
#include "FileIO.h"

//These will need to be sreplaced by the deck module
#define spade 06 
#define club 05 
#define diamond 04 
#define heart 03 
#define MAXNAME 15

int main(int argc, char**argv)
{
    if (argc < 1) {
        printf("No name argument provided");
        exit(1);
    }


    char username[MAXNAME];
    strncpy(username, argv[1], MAXNAME);

    PPLAYER thePlayer = createPlayer(username);
    
    PrintWelcome(); //prints intro
    MainMenu(thePlayer);


    QUEUE* q = queueInit();
    readQueueFromFile(q);
    saveQueueToFile(q, thePlayer->score);

     return 0;
}