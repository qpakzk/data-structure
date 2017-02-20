#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node {
	LData data;
	struct _node *next;
	struct _node *prev;
} Node;

typedef struct _DBLinkedList {
	Node *head;
	Node *cur;
	int numOfData;
} DBLinkedList;
typedef DBLinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);
int LPrevious(List *plist, LData *pdata);

int LCount(List *plist);

#endif
