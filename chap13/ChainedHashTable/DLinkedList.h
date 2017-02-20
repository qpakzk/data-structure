#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

#include "Slot2.h"

typedef Slot LData;

typedef struct _node {
	LData data;
	struct _node *next;
} Node;

typedef struct _linkedList {
	Node *head;
	Node *before;
	Node *cur;
	int numOfCount;
	int (*comp)(LData data1, LData data2);
} LinkedList;

typedef LinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData LRemove(List *plist);
int LCount(List *plist);

void SetSortRule(List *plist, int (*comp)(LData data1, LData data2));

#endif
