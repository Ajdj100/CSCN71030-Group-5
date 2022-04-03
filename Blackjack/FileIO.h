#pragma once

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FILE_NAME "../Scores.txt"
#define MAX_BUFFER_SIZE 5

typedef struct CircularQueue
{
	int itemsInBuffer;
	int* highScores;
} QUEUE;

// Circular Queue Operations
QUEUE* queueInit();
void enqeueu(QUEUE*, int);
void dequeue(QUEUE*);
void bubbleSort(QUEUE*);

// Read/Write from file
void saveQueueToFile(QUEUE*, int);
int* returnHighScores();