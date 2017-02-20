#include "DLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void ListInit(List *plist) {
	plist->head = (Node *)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfCount = 0;
}

void FInsert(List *plist, LData data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head->next;
	plist->head->next = newNode;

	(plist->numOfCount)++;	
}

void SInsert(List *plist, LData data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	Node *pred = plist->head;

	newNode->data = data;
	
	while(pred->next != NULL && plist->comp(data, pred->next->data) != 0) {
		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->numOfCount)++;	
}

void LInsert(List *plist, LData data) {
	if(plist->comp == NULL)
		FInsert(plist, data);
	else
		SInsert(plist, data);
}

int LFirst(List *plist, LData *pdata) {
	if(plist->head->next == NULL)
		return FALSE;
	plist->before = plist->head;
	plist->cur = plist->head->next;
	
	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List *plist, LData *pdata) {
	if(plist->cur->next == NULL)
		return FALSE;
	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

LData LRemove(List *plist) {
	Node *rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfCount)--;
	return rdata;
}

int LCount(List *plist) {
	return plist->numOfCount;
}

void SetSortRule(List *plist, int (*comp)(LData data1, LData data2)) {
	plist->comp = comp;
}
