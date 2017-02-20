#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void DequeInit(Deque *pdeq) {
	pdeq->head = NULL;
	pdeq->tail = NULL;
}

int DQIsEmpty(Deque *pdeq) {
	if(pdeq->head == NULL) 
		return TRUE;
	else
		return FALSE;
}

void DQAddFirst(Deque *pdeq, Data data) {
	Node *newNode =(Node * )malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = NULL;	
	
	newNode->next = pdeq->head;

	if(DQIsEmpty(pdeq)) 
		pdeq->tail = newNode;
	else
		pdeq->head->prev = newNode;

	pdeq->head = newNode;
}

void DQAddLast(Deque *pdeq, Data data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;

	newNode->prev = pdeq->tail;

	if(DQIsEmpty(pdeq)) 
		pdeq->head = newNode;
	else
		pdeq->tail->next = newNode;

	pdeq->tail = newNode;
}

Data DQRemoveFirst(Deque *pdeq) {
	Node *delNode;
	Data retData;

	if(DQIsEmpty(pdeq)) {
		printf("Deque Memory Error!\n");
		exit(-1);
	}

	delNode = pdeq->head;
	retData = pdeq->head->data;
	
	pdeq->head = pdeq->head->next;

	free(delNode);

	if(pdeq->head == NULL)
		pdeq->tail = NULL;
	else 
		pdeq->head->prev = NULL;

	return retData;
}

Data DQRemoveLast(Deque *pdeq) {
	Node *delNode;
	Data retData;

	if(DQIsEmpty(pdeq)) {
		printf("Deque Memory Error!\n");
		exit(-1);
	}

	delNode = pdeq->tail;
	retData = pdeq->tail->data;

	pdeq->tail = pdeq->tail->prev;

	free(delNode);

	if(pdeq->tail == NULL) 
		pdeq->head = NULL;
	else
		pdeq->tail->next = NULL;

	return retData;
}

Data DQPeekFirst(Deque *pdeq) {
	if(DQIsEmpty(pdeq)) {
		printf("Deque Memory Error!\n");
		exit(-1);
	}

	return pdeq->head->data;
}

Data DQPeekLast(Deque *pdeq) {
	if(DQIsEmpty(pdeq)) {
		printf("Deque Memory Error!\n");
		exit(-1);
	}

	return pdeq->tail->data;
}

