#include <stdio.h>
#include <stdlib.h>

void MergeTwoArea(int arr[], int left, int mid, int right) {
	int fIdx = left;
	int rIdx = mid + 1;
	int i;

	int *sortArr = (int *)malloc(sizeof(int) * (right + 1));
	int sIdx = left;

	while(fIdx <= mid && rIdx <= right) { 
		if(arr[fIdx] <= arr[rIdx])
			sortArr[sIdx] = arr[fIdx++];
		else
			sortArr[sIdx] = arr[rIdx++];

		sIdx++;
	}

	if(fIdx > mid) {
		for(i = rIdx; i <= right; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}
	else {
		for(i = fIdx; i <= mid; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}

	for(i = left; i <= right; i++) {
		arr[i] = sortArr[i];
	}

	free(sortArr);
}

void MergeSort(int arr[], int left, int right) {
	int mid;

	if(left < right) {
		mid = (left + right) / 2;

		MergeSort(arr, left, mid);
	   	MergeSort(arr, mid + 1, right);	

		MergeTwoArea(arr, left, mid, right);
	}
}

int main(void) {
	int arr[] = {3, 2, 4, 1, 7, 6, 5};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i;

	MergeSort(arr, 0, len - 1);

	for(i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
