 //	Group 5 - Blackjack
//	Written by: Sebastian I.

#include "FileIO.h"

// Circular queue operations
QUEUE* queueInit()
{
	QUEUE* highScores = (QUEUE*)malloc(sizeof(QUEUE));

	if (highScores == NULL)
	{
		printf("Error mallocing ring buffer");
		exit(-1);
	}
	else
	{
		highScores->itemsInBuffer = 0;

		for (int i = 0; i < MAX_BUFFER_SIZE; i++)
			enqueue(highScores, 0);

		highScores->itemsInBuffer = 0;

		return highScores;
	}
}

void enqueue(QUEUE* q, int newScore)
{
	if (q == NULL) return;
	else if (q->itemsInBuffer < MAX_BUFFER_SIZE)
	{
		q->highScores[q->itemsInBuffer] = newScore;
		q->itemsInBuffer++;
		bubbleSort(q);
	}
	else
	{
		if (newScore > q->highScores[MAX_BUFFER_SIZE - 1])
		{
			q->highScores[MAX_BUFFER_SIZE - 1] = newScore;
			bubbleSort(q);
		}
	}

	return;
}

void dequeue(QUEUE* q)
{
	if (q == NULL) return;
	else
	{
		q->highScores[q->itemsInBuffer] = 0;
		q->itemsInBuffer--;
	}
	
	return;
}

// Read/Write from file
void saveQueueToFile(QUEUE* q, int newScore)
{	
	enqueue(q, newScore);

	FILE* fp;
	fp = fopen(FILE_NAME, "w");

	if (fp == NULL)
		printf("There has been an error opening the High Score file\n");
	else if (fwrite(q, sizeof(QUEUE), 1, fp) != 1)
	{
		printf("There has been an error writing to file.\n");
	}

	fclose(fp);
	return;
}

void readQueueFromFile(QUEUE* q)
{
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

	fread(q, sizeof(QUEUE), 1, fp);
	fclose(fp);
}

int* returnHighScores()
{
	QUEUE* scores = queueInit();
	readQueueFromFile(scores);

	return scores->highScores;
}

void bubbleSort(QUEUE* q)
{
	int temp;
	for (int i = 0; i < q->itemsInBuffer; i++)
	{
		for (int j = 0; j < (q->itemsInBuffer - 1); j++)
		{
			if (q->highScores[j] < q->highScores[j + 1])
			{
				temp = q->highScores[j];
				q->highScores[j] = q->highScores[j + 1];
				q->highScores[j + 1] = temp;
			}
		}
	}

	return;
}

//QUEUE* q = queueInit();
//
//saveQueueToFile(q, 1);
//saveQueueToFile(q, 3);
//saveQueueToFile(q, 18);
//saveQueueToFile(q, 2);
//saveQueueToFile(q, 5);
//
//readQueueFromFile(q);
//int* scores = returnHighScores(q);
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//	printf("%d\n", scores[i]);