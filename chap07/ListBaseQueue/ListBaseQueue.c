#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void QueueInit(Queue *pq) {
	pq->front = NULL;
	pq->rear = NULL;
}

int QIsEmpty(Queue *pq) {
	if(pq->front == NULL) 
		return TRUE;
	else
		return FALSE;
}

void Enqueue(Queue *pq, Data data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = data;

	if(QIsEmpty(pq)) {
		pq->front = newNode;
		pq->rear = newNode;
	}	
	else {
		pq->rear->next = newNode;
		pq->rear = newNode;
	}
}

Data Dequeue(Queue *pq) {
	Node *delNode;
	Data retData;

	if(QIsEmpty(pq)) {
		printf("Queue Memory Error!\n");
		exit(-1);
	}

	delNode = pq->front;
	retData = delNode->data;
	
	pq->front = pq->front->next;
	
	free(delNode);	
	return retData;
}

Data QPeek(Queue *pq) {
	if(QIsEmpty(pq)) {
		printf("Queue Memory Error!\n");
		exit(-1);
	}

	return pq->front->data;
}
