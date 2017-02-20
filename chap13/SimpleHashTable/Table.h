#ifndef __TABLE_H__
#define __TABLE_H__

#include "Slot.h"

typedef int HashFunc(Key k);

#define MAX_TBL 100

typedef struct _table {
	Slot tbl[MAX_TBL];
	HashFunc *hf;	
} Table;

void TBLInit(Table *pt, HashFunc *f);
void TBLInsert(Table *pt, Key k, Value v);
Value TBLDelete(Table *pt, Key k);
Value TBLSearch(Table *pt, Key k);

#endif
