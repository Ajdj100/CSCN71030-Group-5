#pragma once

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FILE_NAME "../Scores.txt"
#define MAX_BUFFER_SIZE 5

typedef struct CircularQueue
{
	int head;
	int tail;
	int itemsInBuffer;
	int newestIndex;
	char* names;
	int* highScores;
} QUEUE;

//Ring buffer operations
QUEUE* queueInit();
void enqeueu(QUEUE*, char, int);
void dequeue(QUEUE*);

//Read/Write from file
void saveHighScoreToFile(QUEUE*);
int* returnHighScores();
char* returnUserNames();