#ifndef __DBD_LINKED_LIST_H__
#define __DBD_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node {
	Data data;
	struct _node *next;
	struct _node *prev;
} Node;

typedef struct _dbDLinkedList {
	Node *head;
	Node *cur;
	Node *tail;
	int numOfData;
} DBDLinkedList;

typedef DBDLinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, Data data);

int LFirst(List *plist, Data *pdata);
int LNext(List *plist, Data *pdata);

Data LRemove(List *plist);
int LCount(List *plist);

#endif
