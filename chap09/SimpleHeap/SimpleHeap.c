#include "SimpleHeap.h"

void HeapInit(Heap *ph) {
	ph->numOfData = 0;
}

int HIsEmpty(Heap *ph) {
	if(ph->numOfData == 0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx) {
	return idx / 2; 
}

int GetLChildIDX(int idx) {
	return idx * 2;
}

int GetRChildIDX(int idx) {
	return GetLChildIDX(idx) + 1;
}

int GetHiPriChildIDX(Heap *ph, int idx) {
	
	if(GetLChildIDX(idx) > ph->numOfData)
		return 0;
	else if(GetLChildIDX(idx) == ph->numOfData)
		return GetLChildIDX(idx);
	else {
		if(ph->heapArr[GetLChildIDX(idx)].pr < ph->heapArr[GetRChildIDX(idx)].pr) 
			return GetLChildIDX(idx);
		else
			return GetRChildIDX(idx);
	}
}
void HInsert(Heap *ph, HData data, Priority pr) {
	int idx = ph->numOfData + 1;
	HeapElem nElem = {pr, data};

	while(idx != 1) {
		if(pr < (ph->heapArr[GetParentIDX(idx)].pr)) {
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else
			break;
	}	
	
	ph->heapArr[idx] = nElem;
	ph->numOfData += 1;
}

HData HDelete(Heap *ph) {
	HData retData = (ph->heapArr[1]).data;
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;
	while((childIdx = GetHiPriChildIDX(ph, parentIdx))) {
		if(lastElem.pr <= ph->heapArr[childIdx].pr)
			break;
		
		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;
	}

	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData -= 1;

	return retData;
}
