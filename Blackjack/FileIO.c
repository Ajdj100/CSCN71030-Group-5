 //	Group 5 - Blackjack
//	Written by: Sebastian I.

#include "FileIO.h"

//	Circular queue operations
QUEUE* queueInit()
{
	QUEUE *highScores = (QUEUE*)malloc(sizeof(QUEUE));

	if (highScores == NULL)
	{
		printf("Error mallocing ring buffer");
		exit(-1);
	}
	else
	{
		highScores->itemsInBuffer = 0;
		highScores->highScores = (int*)malloc(sizeof(int) * MAX_BUFFER_SIZE);

		for (int i = 0; i < MAX_BUFFER_SIZE; i++)
			enqeueu(highScores, 0);

		return highScores;
	}
}

void enqeueu(QUEUE* q, int newScore)
{
	if (q == NULL) return;
	else if (q->itemsInBuffer < MAX_BUFFER_SIZE)
	{
		q->highScores[q->itemsInBuffer] = newScore;
		bubbleSort(q);
	}
	else
	{
		if (q->highScores[MAX_BUFFER_SIZE - 1] < newScore)
			q->highScores[MAX_BUFFER_SIZE - 1] = newScore;
	}

	return;
	//if (q == NULL) return;
	//else if (q->itemsInBuffer == MAX_BUFFER_SIZE) return;
	//else {
	//	// first we move the tail (insert) location up one (in the circle (size related to _capacity))
	//	q->tail = (q->tail + 1) % MAX_BUFFER_SIZE; // this makes it go around in a circle
	//	// now we can add the actual item to the location
	//	q->highScores[q->tail] = newScore;
	//	// now we have to increase the size.
	//	q->itemsInBuffer++;
	//	return;
	//}
}
void dequeue(QUEUE* q)
{
	if (q == NULL) return;
	else
	{
		q->highScores[q->itemsInBuffer] - 0;
		q->itemsInBuffer--;
	}
	
	return;
}

//	Read/Write from file
void saveQueueToFile(QUEUE* q, int newScore)
{
	if (q->itemsInBuffer == MAX_BUFFER_SIZE)
	{
		dequeue(q);
		enqeueu(q, newScore);
	}
	else
		enqeueu(q, newScore);

	FILE* fp;
	fp = fopen(FILE_NAME, "w");

	if (fp == NULL)
		printf("There has been an error opening the High Score file\n");
	else
		fwrite(q, sizeof(QUEUE), 1, fp);

	fclose(fp);
	return;
}

int* returnHighScores()
{
	QUEUE* scores = queueInit();

	FILE* fp;
	fp = fopen(FILE_NAME, "r");

	if (fp == NULL)
	{
		printf("There has been an error opening the High Score file\n");
		return -1;
	}
	else if (fp == EOF)
	{
		printf("The high score file is empty.\n");
		return -1;
	}

	fread(scores, sizeof(QUEUE), 1, fp);

	return scores->highScores;
}

void bubbleSort(QUEUE* q)
{
	for (int i = 0; i < q->itemsInBuffer; i++)
	{
		for (int j = i; j < q->itemsInBuffer; j++)
		{
		
		}
	}
}

//	Test Code
//QUEUE* scores = queueInit();
//saveQueueToFile(scores, 1);
//saveQueueToFile(scores, 2);
//saveQueueToFile(scores, 3);
//saveQueueToFile(scores, 4);
//saveQueueToFile(scores, 5);
//
//int* highScores = returnHighScores();
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//	printf("%d\n", highScores[i]);
//
//saveQueueToFile(scores, 6);
//saveQueueToFile(scores, 7);
//saveQueueToFile(scores, 8);
//saveQueueToFile(scores, 9);
//saveQueueToFile(scores, 10);
//
//highScores = returnHighScores();
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//	printf("%d\n", highScores[i]);