#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include "Interface.h"
#define spade 06 
#define club 05 
#define diamond 04 
#define heart 03 

int main(void) 
{

    //srand((unsigned)time(NULL)); //Generates random seed for rand() function

    PrintClub();
    PrintDiamond();
    PrintHeart();
    PrintSpade();
    system("pause");
    return 0;
}