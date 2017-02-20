#ifndef __DEQUE_BASE_QUEUE_H__
#define __DEQUE_BASE_QUEUE_H__

#define TRUE 1
#define FALSE 0

#include "Deque.h"

typedef int Data;

typedef struct _dqQueue {
	Deque *pdeq;
} DQQueue;

typedef DQQueue Queue;

void QueueInit(Queue *pq);
int QIsEmpty(Queue *pq);

void Enqueue(Queue *pq, Data data);
Data Dequeue(Queue *pq);
Data QPeek(Queue *pq);

#endif
