#ifndef __CLL_STACK_H__
#define __CLL_STACK_H__

#include "CLinkedList.h"
typedef int Data;

typedef struct _listStack {
	List *plist;	
} ListStack;

typedef ListStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif
