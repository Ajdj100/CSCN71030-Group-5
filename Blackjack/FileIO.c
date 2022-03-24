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
		highScores->tail = -1;
		highScores->head = 0;
		highScores->itemsInBuffer = 0;
		highScores->newestIndex = 0;
		highScores->names = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
		highScores->highScores = (int*)malloc(sizeof(int) * MAX_BUFFER_SIZE);

		for (int i = 0; i < MAX_BUFFER_SIZE; i++)
		{
			enqeueu(highScores, DEFAULT_USERNAME, 0);
		}

		return highScores;
	}
}

void enqeueu(QUEUE* q, char userName, int newScore)
{
	if (q == NULL) return;
	else if (q->itemsInBuffer == MAX_BUFFER_SIZE) return;
	else {
		// first we move the tail (insert) location up one (in the circle (size related to _capacity))
		q->tail = (q->tail + 1) % MAX_BUFFER_SIZE; // this makes it go around in a circle
		// now we can add the actual item to the location
		q->names[q->tail] = userName;
		q->highScores[q->tail] = newScore;
		// now we have to increase the size.
		q->itemsInBuffer++;
		return;
	}
}
void dequeue(QUEUE* q)
{
	if (q == NULL) return;
	else
	{
		q->head = (q->head + 1) % MAX_BUFFER_SIZE;  // circular queue
		q->itemsInBuffer--;
	}
	
}

//	Read/Write from file
void saveQueueToFile(QUEUE* q, char userName, int newScore)
{
	if (q->itemsInBuffer == MAX_BUFFER_SIZE)
	{
		dequeue(q);
		enqeueu(q, userName, newScore);
	}
	else
		enqeueu(q, userName, newScore);

	FILE* fp;
	fp = fopen(FILE_NAME, "w");

	if (fp == NULL)
		printf("There has been an error opening the High Score file\n");
	else
		fwrite(q, sizeof(QUEUE), 1, fp);

	fclose(fp);
	return;
}

char* returnUserNames()
{
	QUEUE* q = queueInit();

	FILE* fp;
	fp = fopen(FILE_NAME, "r");

	if (fp == NULL)
		printf("There has been an error opening the High Score file\n");
	else if (fp == EOF)
	{
		printf("The high score file is empty.\n");
		return;
	}

	fread(q, sizeof(QUEUE), 1, fp);

	return q->names;
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

//	Test Code
//QUEUE* scores = queueInit();
//saveQueueToFile(scores, DEFAULT_USERNAME, 1);
//saveQueueToFile(scores, DEFAULT_USERNAME, 2);
//saveQueueToFile(scores, DEFAULT_USERNAME, 3);
//saveQueueToFile(scores, DEFAULT_USERNAME, 4);
//saveQueueToFile(scores, DEFAULT_USERNAME, 5);
//
//int* highScores = returnHighScores();
//char* userNames = returnUserNames();
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//{
//	printf("%c - %d\n", scores->names[i], highScores[i]);
//}
//
//saveQueueToFile(scores, "YES", 6);
//saveQueueToFile(scores, "PEPSI MAN", 7);
//saveQueueToFile(scores, "YES", 8);
//saveQueueToFile(scores, "GUY", 9);
//saveQueueToFile(scores, "SI", 10);
//
//
//highScores = returnHighScores();
//userNames = returnUserNames();
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//{
//	printf("%c - %d\n", scores->names[i], highScores[i]);
//}