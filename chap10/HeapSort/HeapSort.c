#include <stdio.h>
#include "UsefulHeap.h"
int PriComp(int n1, int n2) {
	return n2 - n1;
}

void HeapSort(int arr[], int n, PriorityComp pc) {
	Heap heap;
	int i;

	HeapInit(&heap, pc);
	
	for(i = 0; i < n; i++) {
		HInsert(&heap, arr[i]);
	}

	for(i = 0; i < n; i++) {
		arr[i] = HDelete(&heap);
	}
}

int main(void) {
	int arr[] = {3, 4, 2, 1};
	int i;
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]), PriComp);

	for(i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}	

	printf("\n");

	return 0;
}
