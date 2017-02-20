#include <stdio.h>
#include <stdlib.h>
#include "DequeBaseQueue.h"
#include "Deque.h"

void QueueInit(Queue *pq) {
	DequeInit(pq);
}

int QIsEmpty(Queue *pq) {
	if(DQIsEmpty(pq))
		return TRUE;
	else
		return FALSE;	
}

void Enqueue(Queue *pq, Data data) {
	DQAddLast(pq, data);
}

Data Dequeue(Queue *pq) {
	return DQRemoveFirst(pq);
}

Data QPeek(Queue *pq) {
	return DQPeekFirst(pq);
}
