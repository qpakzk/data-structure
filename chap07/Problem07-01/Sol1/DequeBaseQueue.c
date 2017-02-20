#include <stdio.h>
#include <stdlib.h>
#include "DequeBaseQueue.h"
#include "Deque.h"

void QueueInit(Queue *pq) {
	pq->pdeq = (Deque *)malloc(sizeof(Deque));
	DequeInit(pq->pdeq);
}

int QIsEmpty(Queue *pq) {
	if(DQIsEmpty(pq->pdeq))
		return TRUE;
	else
		return FALSE;	
}

void Enqueue(Queue *pq, Data data) {
	DQAddLast(pq->pdeq, data);
}

Data Dequeue(Queue *pq) {
	return DQRemoveFirst(pq->pdeq);
}

Data QPeek(Queue *pq) {
	return DQPeekFirst(pq->pdeq);
}
