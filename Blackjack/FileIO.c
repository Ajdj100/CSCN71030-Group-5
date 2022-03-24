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
		highScores->highScores = (int*)malloc(sizeof(int) * MAX_BUFFER_SIZE);

		for (int i = 0; i < MAX_BUFFER_SIZE; i++)
			enqeueu(highScores, 0);

		return highScores;
	}
}

void enqeueu(QUEUE* q, int newScore)
{
	if (q == NULL) return;
	else if (q->itemsInBuffer == MAX_BUFFER_SIZE) return;
	else {
		// first we move the tail (insert) location up one (in the circle (size related to _capacity))
		q->tail = (q->tail + 1) % MAX_BUFFER_SIZE; // this makes it go around in a circle
		// now we can add the actual item to the location
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
void saveHighScoreToFile(QUEUE* q, int newScore)
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

int* returnHighScoresFromFile()
{
	QUEUE* scores = queueInit();

	FILE* fp;
	fp = fopen(FILE_NAME, "r");

	if (fp == NULL)
		printf("There has been an error opening the High Score file\n");
	else if (fp == EOF)
	{
		printf("The high score file is empty.\n");
		return;
	}

	fread(scores, sizeof(QUEUE), 1, fp);

	return scores->highScores;
}

//	Test Code
//QUEUE* scores = queueInit();
//saveHighScoreToFile(scores, 1);
//saveHighScoreToFile(scores, 2);
//saveHighScoreToFile(scores, 3);
//saveHighScoreToFile(scores, 4);
//saveHighScoreToFile(scores, 5);
//
//int* highScores = returnHighScoresFromFile();
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//{
//	printf("%d\n", highScores[i]);
//}
//
//saveHighScoreToFile(scores, 6);
//saveHighScoreToFile(scores, 7);
//saveHighScoreToFile(scores, 8);
//saveHighScoreToFile(scores, 9);
//saveHighScoreToFile(scores, 10);
//
//
//highScores = returnHighScoresFromFile();
//
//for (int i = 0; i < MAX_BUFFER_SIZE; i++)
//{
//	printf("%d\n", highScores[i]);
//}