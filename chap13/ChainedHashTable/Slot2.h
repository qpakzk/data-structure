#ifndef __SLOT_H__
#define __SLOT_H__

#include "Person.h"

typedef int Key;
typedef Person * Value;

typedef struct _slot {
	Key key;
	Value val;
} Slot;

#endif
